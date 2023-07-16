#pragma once
#include "ReaderServices.h"
#include "ServicesHashTable.h"

using namespace std;

ServicesHashTable::ServicesHashTable(int tableSize)
{
    tableEntity emptyEntity;
    emptyEntity.status = 0;
    emptyEntity.value = nullptr;

    this->size = tableSize;
    this->originSize = tableSize;
    this->table = vector<tableEntity>(tableSize);
    for (int i = 0; i < tableSize; i++)
    {
        this->table[i] = emptyEntity;
    };
}

ServicesHashTable::~ServicesHashTable()
{
    cout << endl
        << "HashTable was deleted";
    this->table.clear();
    this->table.shrink_to_fit();
}

int ServicesHashTable::hashFun(ServiceEntity* item)
{
    int result = 0;
    string data = item->serviceType + item->serviceName;

    for (int i = 0; i < data.size() - 1; i++) {
        result += abs(int(data[i])) + abs(int(data[i + 1]));
        cout << abs(int(data[i])) + abs(int(data[i + 1])) << " + ";
    }
    cout << " = " << result;
    int test = result % this->size;
    return result % this->size;
}

int ServicesHashTable::secHashFun(int hash, int step)
{
    return (hash + step * step) % this->size;
}

void ServicesHashTable::printTable()
{
    for (int i = 0; i < this->table.size(); i++)
    {
        if (this->table[i].status == 1)
        {
            int hash = hashFun(this->table[i].value);
            cout << "index: " << i << "| value: " << this->table[i].value->division << " " << this->table[i].value->serviceType << " " << this->table[i].value->serviceName << " " << this->table[i].value->term << " |status: 1|"
                << " 1st hash: " << to_string(hash) << " | Array indx = " << this->table[i].index <<  endl;
        }
        else
        {
            cout << "index: " << i << "| value: - "
                << " |status: 0" << endl;
        }
    }
}

void ServicesHashTable::debugPrintTable(ofstream& fout)
{
    for (int i = 0; i < this->table.size(); i++)
    {
        if (this->table[i].status == 1)
        {
            int hash = hashFun(this->table[i].value);
            fout << "index: " << i << "| value: " << this->table[i].value->division << " " << this->table[i].value->serviceType << " " << this->table[i].value->serviceName << " " << this->table[i].value->term << " |status: 1|"
                << " 1st hash: " << to_string(hash) << " | Array indx = " << this->table[i].index << endl;
        }
        else
        {
            fout << "index: " << i << "| value: - "
                << " |status: 0" << endl;
        }
    }
}

int ServicesHashTable::findPlace(int hash)
{
    int step = 1;
    int rehash = secHashFun(hash, step);
    if (this->table[hash].status == 0) {
        return hash;
    }
    while (this->table[rehash].status == 1 && step < this->size)
    {
        step++;
        rehash = secHashFun(hash, step);
    }
    if (this->table[rehash].status == 0)
    {
        return rehash;
    }
    else
    {
        return -1;
    }
}

void ServicesHashTable::insertResolveCollision(ServiceEntity* item, string type, int id)
{
    bool flag = true;

    int hash = hashFun(item);
    tableEntity newEntity;
    newEntity.status = 1;
    newEntity.value = item;
    newEntity.index = id;
    int step = 1;
    int rehash = secHashFun(hash, step);

    while (this->table[rehash].status == 1 && step < this->size && flag == true)
    {

        if (isEqualServices(this->table[rehash].value, item) == true)
        {
            flag = false;
            if (type == "basic") {
                cout << "The element is already in the table" << endl;
            }
            this->filled--;
            if (calculateOccupancy() > 75) {
                resizeTable(calculateOccupancy(), item, "delete", id);
            }
        }
        step++;
        rehash = secHashFun(hash, step);
    }

    if (flag)
    {
        if (this->table[rehash].status != 0)
        {
            if (type == "basic")
            {
                resizeTable(100, item, "insert", id);
            }
            hash = hashFun(item);
            rehash = findPlace(hash);
            while (rehash == -1)
            {
                if (type == "basic")
                {
                    resizeTable(100, item, "insert", id);
                }
                hash = hashFun(item);
                rehash = findPlace(hash);
            }
        }
        this->table[rehash] = newEntity;
    }
}

int ServicesHashTable::calculateOccupancy()
{
    return (this->filled * 100 / this->size);
}

void ServicesHashTable::htInsertA(ServiceEntity* item, string type, int index)
{
    this->filled++;
    if (type == "basic")
    {
        resizeTable(calculateOccupancy(), item, "resize", index);
    }

    int hash = hashFun(item);
    if (this->table[hash].status == 0)
    {
        tableEntity newEntity;
        newEntity.status = 1;
        newEntity.value = item;
        newEntity.index = index;
        this->table[hash] = newEntity;
    }
    else
    {
        insertResolveCollision(item, type, index);
    }
}

void ServicesHashTable::deleteItem(ServiceEntity* item)
{
    this->filled--;
    resizeTable(calculateOccupancy(), item, "jopa", -1);

    int hash = hashFun(item);
    int deletableIndx = -1;
    int possible;

    if (this->table[hash].status == 1)
    {
        int step = 1;
        int rehash = secHashFun(hash, step);
        step++;
        int nextRehash = secHashFun(hash, step);
        int valid = -1;

        if (isEqualServices(item, this->table[hash].value) == true)
        {
            valid = hash;
            deletableIndx = valid;
        }

        if (this->table[rehash].status == 1) {
            if (hash == hashFun(this->table[rehash].value))
            {
                valid = rehash;
                if (isEqualServices(item, this->table[valid].value) == 1)
                {
                    deletableIndx = valid;
                }
            }
        }


        while (this->table[rehash].status == 1 && this->table[nextRehash].status == 1 && this->size > step)
        {
            step++;
            rehash = nextRehash;
            nextRehash = secHashFun(hash, step);

            if (hash == hashFun(this->table[rehash].value))
            {
                valid = rehash;
                if (isEqualServices(item, this->table[valid].value) == 1)
                {
                    deletableIndx = valid;
                }
            }

        }


        if (deletableIndx != -1)
        {
            tableEntity emptyEntity;
            emptyEntity.status = 0;
            emptyEntity.value = nullptr;

            if (valid == deletableIndx)
            {
                int anotherValid = checkAnotherChain(deletableIndx);
                if (anotherValid != -1) {
                    this->table[deletableIndx] = this->table[anotherValid];
                    this->table[anotherValid] = emptyEntity;
                }
                else {
                    this->table[deletableIndx] = emptyEntity;
                }
            }
            else
            {
                this->table[deletableIndx].value = this->table[valid].value;
                this->table[valid] = emptyEntity;
            }
        }

        int jopa = 0;
    }

    if (deletableIndx == -1)
    {
        this->filled++;
        cout << "Can't delete this element. The element is not in the table." << endl
            << endl;
        resizeTable(calculateOccupancy(), item, "jopa", -1);
    }
}

int ServicesHashTable::checkAnotherChain(int index) {
    int step = 1;
    int valid = -1;
    int rehash = secHashFun(index, step);
    while (this->table[rehash].status == 1 && this->size > step) {
        if (index == hashFun(this->table[rehash].value)) {
            valid = rehash;
        }
        step++;
        rehash = secHashFun(index, step);
    }
    return valid;
}

vector<int> ServicesHashTable::findItem(ServiceEntity* item)
{
    vector<int> result;
    int counter = 0;
    int current = 0;
    int step = 1;
    int hash = hashFun(item);

            if (isEqualServices(this->table[hash].value, item) != 1)
                {
                    int rehash = secHashFun(hash, step);
                    while (step < this->size && isEqualServices(this->table[rehash].value, item) != 1)
                    {
                        step++;
                        rehash = secHashFun(hash, step);
                    }
                    current = rehash;
                }
                else
                {
                    current = hash;
                }
                result.push_back(step);
                if (this->table[current].status == 1 && isEqualServices(this->table[current].value, item) == 1)
                {
                    //DataStorage::resultSerch = true;
                    result.push_back(1);
                    result.push_back(this->table[current].index);
                    return result;
                }
                else
                {
                    result.push_back(0);
                    result.push_back(-1);
                    //DataStorage::resultSerch = false;
                    return result;
                }
    
    
}

bool ServicesHashTable::findItemByKey(ServiceEntity* item) {
    bool result;
    int counter = 0;
    int current = 0;
    int step = 1;
    int hash = hashFun(item);
    
    if (this->table[hash].status == 1) {
        if ((item->serviceName + item->serviceType) != (this->table[hash].value->serviceName + this->table[hash].value->serviceType))
        {
            int rehash = secHashFun(hash, step);
            if (this->table[rehash].status == 1) {
                while (step < this->size && (item->serviceName + item->serviceType) != (this->table[rehash].value->serviceName + this->table[rehash].value->serviceType))
                {
                    step++;
                    rehash = secHashFun(hash, step);
                }
                if (this->table[rehash].status == 0) {
                    return false;
                }
                current = rehash;
            }   
        }
        else
        {
            current = hash;
        }
        if (this->table[current].status == 1 && (item->serviceName + item->serviceType) == (this->table[current].value->serviceName + this->table[current].value->serviceType))
        {
            //DataStorage::resultSerch = true;
            result = true;
            return result;
        }
        else
        {
            result = false;
            //DataStorage::resultSerch = false;
            return result;
        }
    }
    else {
        result = false;
        //DataStorage::resultSerch = false;
        return result;
    }
    
}

void ServicesHashTable::resizeTable(int occupancy, ServiceEntity* item, string type, int index)
{
    if ((occupancy < 25 && (this->size / 2) >= this->originSize) || occupancy > 75)
    {
        int newSize = 0;
        if (occupancy > 75)
        {
            newSize = this->size * 2;
        }
        else
        {
            newSize = this->size / 2;
        }

        vector <tableEntity * > buffer(this->table.size());
        this->filled = 0;
        for (int i = 0; i < this->table.size(); i++)
        {
            if (this->table[i].value != nullptr)
            {
                buffer[i]->value = (this->table[i].value);
                buffer[i]->index = (this->table[i].index);
            }
        }

        tableEntity emptyEntity;
        emptyEntity.status = 0;
        emptyEntity.value = nullptr;
        emptyEntity.index = -1;

        this->size = newSize;
        this->table.clear();
        this->table = vector<tableEntity>(newSize);

        for (int i = 0; i < this->size; i++)
        {
            this->table[i] = emptyEntity;
        }

        for (int i = 0; i < buffer.size(); i++)
        {
            if (buffer[i] != nullptr) {
                htInsertA(buffer[i]->value, "resize", buffer[i]->index);
            }
        }

        if (type == "insert") {
            htInsertA(item, "basic", index);
        }

        buffer.clear();
    }
}

