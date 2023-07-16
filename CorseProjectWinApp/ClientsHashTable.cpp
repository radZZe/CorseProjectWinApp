#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "ReaderClients.h"
#include "ClientsHashTable.h"

using namespace std;

ClientsHashTableEntry::ClientsHashTableEntry(ClientsEntity* value, int status)
{
    this->status = status;
    this->value = value;
}


ClientsHashTable::ClientsHashTable(int size) {
    

    this->size = size;
    this->initsize = size;
    this->occupancy = 0;
    this->count = 0;
    this->table = vector<ClientsHashTableEntry*>(size,nullptr);
    for (int i = 0; i < size; i++) {
        ClientsHashTableEntry* emptyElement = new ClientsHashTableEntry(nullptr, 0);
        emptyElement->index = -1;
        table[i] = emptyElement;
    }
}

int ClientsHashTable::hashFunction(Fullname fullname, string job, string email, ClientPassport passport)
{
    int hash = 0;
    for (int i = 0; i < job.size(); i++) {
        hash += abs(job[i]);
    }
    for (int i = 0; i < email.size(); i++) {
        hash += abs(email[i]);
    }
    string fullnamestr = fullname.name + fullname.surname + fullname.lastname;
    for (int i = 0; i < fullnamestr.size(); i++)
    {
        hash += int(fullnamestr[i]);
    }
    string passportSeries = to_string(passport.series);
    string passportNumber = to_string(passport.number);
    for (int i = 0; i < passportSeries.size(); i++) {
        char num = passportSeries[i];
        hash += num;
    }
    for (int i = 0; i < passportNumber.size(); i++) {
        char num = passportNumber[i];
        hash += num;
    }
    string hashstring = to_string(hash);
    int result = 0;
    if (hashstring.size() % 2 == 0) {
        for (int i = 0; i <= hashstring.size() - 2; i += 2)
        {
            result += int(hashstring[i] + hashstring[i + 1]) * int(hashstring[i] + hashstring[i + 1]);
        }
    }
    else {
        for (int i = 0; i < hashstring.size(); i += 2)
        {
            if (i != hashstring.size() - 1) {
                result += int(hashstring[i] + hashstring[i + 1]) * int(hashstring[i] + hashstring[i + 1]);
            }
            else {
                result += int(hashstring[i]) * int(hashstring[i]);
            }
        }
    }
    return result % this->size;
}

int ClientsHashTable::secondaryHashFunction(int hash, int j) {
    return (hash + j) % size;
}

int ClientsHashTable::resolveExpandCollision(int hash, vector<ClientsHashTableEntry*>table)
{
    int j = 1;
    int rehash = secondaryHashFunction(hash, j);
    while (table[rehash]->status == 1 && j < this->size) {
        j++;
        if (j > this->size) {
            expand();
            j = 1;
        }
        rehash = secondaryHashFunction(hash, j);
    }
    return rehash;
}

int ClientsHashTable::resolve(int hash, ClientsEntity* entity, string type) 
{
    int j = 1;
    int rehash = secondaryHashFunction(hash, j);
    if (type == "INSERT")
    {
        //if (isEqualByStudentsCodeAndGroupNumber(this->table[rehash]->value, entity) || isEqualByStudentsCodeAndGroupNumber(this->table[hash]->entity, entity)) {
        if (isEqualElementsClients(this->table[rehash]->value, entity) || isEqualElementsClients(this->table[hash]->value, entity)) {
            return -1;
        }
        while (j < this->size && table[rehash]->status == 1)
        {
            j++;
            if (j > this->size) {
                expand();
                j = 1;
            }
            rehash = secondaryHashFunction(hash, j);
            if (isEqualElementsClients(this->table[rehash]->value, entity)) {
                return -1;
            }
        }
        return rehash;
    }
    if (type == "FIND" || type == "ERASE")
    {
        //while (j < this->size && table[rehash]->status == 1 && !isEqualByStudentsCodeAndGroupNumber(this->table[rehash]->entity, entity))
        while (j < this->size && table[rehash]->status == 1 && !isEqualElementsClients(this->table[rehash]->value,entity))
        {
            j++;
            if (j > this->size) {
                expand();
                j = 1;
            }
            rehash = secondaryHashFunction(hash, j);
        }
        return rehash;
    }
    expand();
}

bool ClientsHashTable::find(Fullname fullname, string job, string email, ClientPassport passport) {
    ClientsHashTableEntry* temp = new ClientsHashTableEntry(nullptr,0);
    temp->index = -1;
    temp->value->fullname = fullname;
    temp->value->job = job;
    temp->value->email = email;
    temp->value->passport = passport;
    int hash = hashFunction(fullname, job, email, passport);
    if (table[hash]->status == 0) {
        cout << "Element not found\n";
        return false;
    }
    else if (table[hash]->value != nullptr && temp != nullptr && isEqualElementsClients(table[hash]->value, temp->value))
    {
        cout << "index: " << hash << "| value: " << table[hash]->value->fullname.surname << " "
            << table[hash]->value->fullname.name << " " << table[hash]->value->fullname.lastname << " "
            << table[hash]->value->job << " " << table[hash]->value->email << " " << table[hash]->value->passport.series
            << " " <<table[hash]->value->passport.number << " |status: 1" << "|firstHash: "
            << hashFunction(table[hash]->value->fullname, table[hash]->value->job, table[hash]->value->email, table[hash]->value->passport)
            << " |secondHash: " << hash << " |Array index: " << table[hash]->index << '\n';
        return true;
    }
    else
    {
        int rehash = resolve(hash, temp->value, "FIND");
        if (table[rehash]->status == 1 && isEqualElementsClients(table[rehash]->value, temp->value)) {
            cout << "index: " << rehash << "| value: " << table[rehash]->value->fullname.surname << " "
                << table[rehash]->value->fullname.name << " " << table[rehash]->value->fullname.lastname << " "
                << table[rehash]->value->job << " " << table[rehash]->value->email << " " << table[hash]->value->passport.series
                << " " << table[hash]->value->passport.number << " |status: 1" << "|firstHash: "
                << hashFunction(table[rehash]->value->fullname, table[rehash]->value->job, table[rehash]->value->email, table[rehash]->value->passport)
                << " |secondHash: " << rehash << " |Array index: " << table[rehash]->index << '\n';
            return true;
        }
        else {
            cout << "Element not found\n";
            return false;
        }
    }
    cout << "Element not found\n";
    return false;

}

void ClientsHashTable::print()
{
    this->table;
    for (int i = 0; i < size; i++)
    {
        if (table[i]->status != 0)
        {
            cout << "index: " << i << "| value: " << table[i]->value->fullname.surname << " "
                << table[i]->value->fullname.name << " " << table[i]->value->fullname.lastname << " "
                << table[i]->value->job << " " << table[i]->value->email << " " << table[i]->value->passport.series
                << " " << table[i]->value->passport.number << " |status: 1" <<"|firstHash: " 
                <<hashFunction(table[i]->value->fullname, table[i]->value->job, table[i]->value->email, table[i]->value->passport) 
                <<" |secondHash: " <<i <<" |Array index: " << table[i]->index<< '\n';
        }
        else
        {
            cout << "index: " << i << "| value: - "
                << " |status: 0" << endl;
        }
    }
}

void ClientsHashTable::changeIndex(ClientsEntity* clientEntity, int index)
{
    int hash = hashFunction(clientEntity->fullname, clientEntity->job, clientEntity->email, clientEntity->passport);
    if (table[hash]->status == 0) 
    {
        return;
    }
    else if (table[hash]->value != nullptr && clientEntity != nullptr && isEqualElementsClients(table[hash]->value, clientEntity))
    {
        table[hash]->index = index;
    }
    else
    {
        int rehash = resolve(hash, clientEntity, "FIND");
        if (table[rehash]->status == 1 && isEqualElementsClients(table[rehash]->value, clientEntity))
        {
            table[rehash]->index = index;
        }
    }

}

void ClientsHashTable::expand() {
    if (occupancy <= 25 && table.size() > this->initsize || occupancy >= 75) {
        if (this->occupancy >= 75) {
            this->size = this->size * 2;
            this->occupancy = this->occupancy / 2;
        }
        else if (occupancy <= 25) {
            this->size = this->size / 2;
            this->occupancy = this->occupancy * 2;
        }
        vector<ClientsHashTableEntry*>tempTable(this->size);
        for (int i = 0; i < tempTable.size(); i++) {
            ClientsHashTableEntry* temp = new ClientsHashTableEntry(nullptr,0);
            tempTable[i] = temp;
        }
        for (size_t i = 0; i < this->table.size(); i++)
        {
            if (table[i]->status == 1) {
                int hash = hashFunction(table[i]->value->fullname, table[i]->value->job, table[i]->value->email,table[i]->value->passport);
                if (tempTable[hash]->status == 0) {
                    tempTable[hash]->value = table[i]->value;
                    tempTable[hash]->index = table[i]->index;
                    tempTable[hash]->status = 1;
                }
                else {
                    int j = 1;
                    int rehash = resolveExpandCollision(hash, tempTable);
                    tempTable[rehash]->value = table[i]->value;
                    tempTable[rehash]->index = table[i]->index;
                    tempTable[rehash]->status = 1;
                }
            }
        }
        this->table.clear();
        this->table = tempTable;
        tempTable.clear();
    }
}

void ClientsHashTable::insert(ClientsEntity* entity,int index) {
    int hash = hashFunction(entity->fullname,entity->job, entity->email, entity->passport);
    //int hash = 0;
    ClientsHashTableEntry* element = new ClientsHashTableEntry(entity,1);
    element->index = index;

    if (table[hash]->status == 0) {
        table[hash] = element;
        this->count++;
        this->occupancy = (count * 100) / size;
    }
    else {
        int j = 1;
        int rehash = resolve(hash, entity, "INSERT");
        if (rehash == -1) { cout << "Element is not unique\n"; return; }
        table[rehash] = element;
        this->count++;
        this->occupancy = (count * 100) / this->size;
    }
    expand();
}

void ClientsHashTable::deleteEntity(ClientsEntity* entityClient)
{
    this->count--;
    this->occupancy = (this->count / this->size) * 100;
    //resizeTable(calculateOccupancy(), item, "jopa", -1);
    expand();
    int hash = hashFunction(entityClient->fullname, entityClient->job, entityClient->email, entityClient->passport);;
    int deletableIndx = -1;
    int possible;

    if (this->table[hash]->status == 1)
    {
        int step = 1;
        int rehash = secondaryHashFunction(hash, step);
        step++;
        int nextRehash = secondaryHashFunction(hash, step);
        int valid = -1;

        if (isEqualElementsClients(entityClient, this->table[hash]->value))
        {
            valid = hash;
            deletableIndx = valid;
        }

        if (this->table[rehash]->status == 1) {
            if (hash == hashFunction(this->table[rehash]->value->fullname, this->table[rehash]->value->job, this->table[rehash]->value->email, this->table[rehash]->value->passport))
            {
                valid = rehash;
                if (isEqualElementsClients(entityClient, this->table[valid]->value) == 1)
                {
                    deletableIndx = valid;
                }
            }
        }


        while (this->table[rehash]->status == 1 && this->table[nextRehash]->status == 1 && this->size > step)
        {
            step++;
            rehash = nextRehash;
            nextRehash = secondaryHashFunction(hash, step);

            if (hash == hashFunction(this->table[rehash]->value->fullname, this->table[rehash]->value->job, this->table[rehash]->value->email, this->table[rehash]->value->passport))
            {
                valid = rehash;
                if (isEqualElementsClients(entityClient, this->table[valid]->value) == 1)
                {
                    deletableIndx = valid;
                }
            }

        }


        if (deletableIndx != -1)
        {

            ClientsHashTableEntry* emptyEntity = new ClientsHashTableEntry(nullptr,0);

            if (valid == deletableIndx)
            {
                int anotherValid = checkAnotherChainClient(deletableIndx);
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
                this->table[deletableIndx]->value = this->table[valid]->value;
                this->table[valid] = emptyEntity;
            }
        }
    }

    if (deletableIndx == -1)
    {
        this->count++;
        this->occupancy = (count * 100) / size;
        cout << "Can't delete this element. The element is not in the table." << endl
            << endl;
        //resizeTable(calculateOccupancy(), item, "jopa", -1);
        expand();

    }
}

int ClientsHashTable::checkAnotherChainClient(int index) {
    int step = 1;
    int valid = -1;
    int rehash = secondaryHashFunction(index, step);
    while (this->table[rehash]->status == 1 && this->size > step) {
        if (index == hashFunction(this->table[rehash]->value->fullname, this->table[rehash]->value->job, this->table[rehash]->value->email, this->table[rehash]->value->passport)) {
            valid = rehash;
        }
        step++;
        rehash = secondaryHashFunction(index, step);
    }
    return valid;
}

void ClientsHashTable::debugPrint(ofstream& fout)
{
    this->table;
    for (int i = 0; i < size; i++)
    {
        if (table[i]->status != 0)
        {
            fout << "index: " << i << "| value: " << table[i]->value->fullname.surname << " "
                << table[i]->value->fullname.name << " " << table[i]->value->fullname.lastname << " "
                << table[i]->value->job << " " << table[i]->value->email << " " << table[i]->value->passport.series
                << " " << table[i]->value->passport.number << " |status: 1" << "|firstHash: "
                << hashFunction(table[i]->value->fullname, table[i]->value->job, table[i]->value->email, table[i]->value->passport)
                << " |secondHash: " << i << " |Array index: " << table[i]->index << '\n';
        }
        else
        {
            fout << "index: " << i << "| value: - "
                << " |status: 0" << endl;
        }
    }
}

ClientsHashTable::~ClientsHashTable()
{
    cout << "\nHash table removed\n";
    table.clear();
    table.shrink_to_fit();
}