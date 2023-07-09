#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "ReaderClients.h"
#include "ClientsHashTable.h"

using namespace std;

Fullname parseFullname(string input) {
    Fullname fullname;
    vector <int> numbers;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            numbers.push_back(i);
        }
    }
    fullname.name = input.substr(0, numbers.at(0));
    fullname.surname = input.substr(numbers[0] + 1, (numbers[1] - 1) - numbers[0]);
    fullname.lastname = input.substr(numbers[1] + 1, (input.length() - 1) - numbers[1]);
    return fullname;
}

GroupNumber parseGroupNumber(string input) {
    GroupNumber groupNumber;
    vector <int> numbers;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            numbers.push_back(i);
        }
    }
    groupNumber.degree = input.substr(0, numbers.at(0));
    groupNumber.number = stoi(input.substr(numbers[0] + 1, (numbers[1] - 1) - numbers[0]));
    groupNumber.speciality = input.substr(numbers[1] + 1, (input.length() - 1) - numbers[1]);
    return groupNumber;
}

Key parseKey(string input) {
    Key key;
    vector <int> numbers;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '.') {
            numbers.push_back(i);
        }
    }
    key.first = stoi(input.substr(0, numbers.at(0)));
    key.second = stoi(input.substr(numbers[0] + 1, (numbers[1] - 1) - numbers[0]));
    key.third = stoi(input.substr(numbers[1] + 1, (input.length() - 1) - numbers[1]));
    return key;
};

Entity* parseEntity(string input) {
    Entity* entity;
    entity = new Entity();
    vector <int> numbers;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            numbers.push_back(i);
        }
    }
    entity->key = parseKey(input.substr(0, numbers[0]));
    entity->fullname = parseFullname(input.substr(numbers[0] + 1, (numbers[3] - 1) - numbers[0]));
    entity->groupnumber = parseGroupNumber(input.substr(numbers[3] + 1, (input.length() - 1) - numbers[3]));
    return entity;
}

void generateFile(int n, string path)
{
    ofstream fout;
    try
    {
        fout.open(path);
        fout << n;
        fout << '\n';
        for (int i = 0; i < n; i++)
        {
            fout << to_string(rand() % 89 + 10) << '.' << to_string(rand() % 89 + 10) << '.' << to_string(rand() % 89 + 10) << ' ';
            for (int i = 'a'; i < 't'; i++)
                fout << char('a' + rand() % ('z' - 'a'));
            fout << ' ';
            for (int i = 'a'; i < 't'; i++)
                fout << char('a' + rand() % ('z' - 'a'));
            fout << ' ';
            for (int i = 'a'; i < 't'; i++)
                fout << char('a' + rand() % ('z' - 'a'));
            fout << ' ';
            if ((rand() % 100 + 1) % 2 == 1)
            {
                fout << 'M';
            }
            else
                fout << 'B';
            fout << ' ';
            fout << rand() % 8999 + 1000;
            fout << ' ';
            for (int i = 'a'; i < 't'; i++)
                fout << char('a' + rand() % ('z' - 'a'));
            fout << '\n';
        }
        fout.close();
    }
    catch (exception e)
    {
        cout << e.what() << '\n';
    }
}

vector<Entity*> readData(string path, int amount)
{
    string line;
    ifstream file(path);
    getline(file, line);
    int n = stoi(line);
    vector<Entity*> data(min(n, amount));

    for (int i = 0; i < min(n, amount); i++)
    {
        getline(file, line);
        Entity* entity = parseEntity(line);
        data[i] = entity;
    }
    file.close();
    return data;
}

string parseStudentCode(Entity* student) {
    string s;
    if (student->key.first < 10)
    {
        s = "0" + to_string(student->key.first);
    }
    else {
        s = to_string(student->key.first);
    }
    if (student->key.second < 10)
    {
        s += ".0" + to_string(student->key.second);
    }
    else {
        s += "." + to_string(student->key.second);
    }
    if (student->key.third < 10)
    {
        s += ".0" + to_string(student->key.third);
    }
    else {
        s += "." + to_string(student->key.third);
    }
    return s;
}

void writeData(string data, string path) {
    ofstream  fout(path, ios::binary | ios::app);
    fout << data << "\n";
    fout.close();
}



ClientsHashTable::ClientsHashTable(int size) {
    Element* emptyElement = new Element;
    emptyElement->entity = nullptr;
    emptyElement->status = 0;
    this->size = size;
    this->initsize = size;
    this->occupancy = 0;
    this->count = 0;
    this->table = vector<Element*>(size);
    for (int i = 0; i < size; i++) {
        Element* temp = new Element;
        temp->entity = nullptr;
        temp->status = 0;
        this->table[i] = temp;
    }
}

bool isEqualByStudentsCodeAndGroupNumber(Entity* first, Entity* second)
{
    if (first == nullptr || second == nullptr) {
        return false;
    }
    if (first->fullname.name + first->fullname.surname + first->fullname.lastname == second->fullname.name + second->fullname.surname + second->fullname.lastname)
    {
        if (first->groupnumber.degree == second->groupnumber.degree)
        {
            if (first->groupnumber.number == second->groupnumber.number)
            {
                if (first->groupnumber.speciality == second->groupnumber.speciality)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }

}

bool ClientsHashTable::isEqualByEntity(Entity* first, Entity* second)
{
    if (first->key.first == second->key.first && first->key.second == second->key.second && first->key.third == second->key.third && isEqualByStudentsCodeAndGroupNumber(first, second))
    {
        return true;
    }
    return false;
}

int ClientsHashTable::secondaryHashFunction(int hash, int j) {
    return (hash + j) % size;
}

int ClientsHashTable::hashFunction(Fullname fullname, GroupNumber groupnumber) {
    string fullnamestr = fullname.name + fullname.surname + fullname.lastname;
    string groupnumberstr = groupnumber.degree + to_string(groupnumber.number) + groupnumber.speciality;
    int hashfullname = 0;
    for (int i = 0; i < fullnamestr.size(); i++)
    {
        hashfullname += int(fullnamestr[i]);
    }
    int hashgroupnumber = 0;
    for (int i = 0; i < groupnumberstr.size(); i++)
    {
        hashgroupnumber += int(groupnumberstr[i]);
    }
    int hash = hashfullname + hashgroupnumber;
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
    return result % size;
}

int ClientsHashTable::resolveExpandCollision(int hash, vector<Element*>table)
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

int ClientsHashTable::resolve(int hash, Entity* entity, string type) {
    int j = 1;
    int rehash = secondaryHashFunction(hash, j);
    if (type == "INSERT")
    {
        if (isEqualByStudentsCodeAndGroupNumber(this->table[rehash]->entity, entity) || isEqualByStudentsCodeAndGroupNumber(this->table[hash]->entity, entity)) {
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
            if (isEqualByStudentsCodeAndGroupNumber(this->table[rehash]->entity, entity)) {
                return -1;
            }
        }
        return rehash;
    }
    if (type == "FIND" || type == "ERASE")
    {
        while (j < this->size && table[rehash]->status == 1 && !isEqualByStudentsCodeAndGroupNumber(this->table[rehash]->entity, entity))
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

bool ClientsHashTable::find(Fullname fullname, GroupNumber groupNumber) {
    Entity* temp = new Entity;
    temp->fullname = fullname;
    temp->groupnumber = groupNumber;
    int hash = hashFunction(fullname, groupNumber);
    if (table[hash]->status == 0) {
        cout << "Element not found\n";
        return false;
    }
    else if (table[hash]->entity != nullptr && temp != nullptr && isEqualByStudentsCodeAndGroupNumber(table[hash]->entity, temp))
    {
        cout << "index: " << hash << "| value: " << table[hash]->entity->key.first << "."
            << table[hash]->entity->key.second << "." << table[hash]->entity->key.third << " "
            << table[hash]->entity->fullname.name + " " + table[hash]->entity->fullname.lastname + " " + table[hash]->entity->fullname.surname
            << " " << table[hash]->entity->groupnumber.degree << +" " + to_string(table[hash]->entity->groupnumber.number) + " "
            + table[hash]->entity->groupnumber.speciality << " |status: 1" << endl;
        return true;
    }
    else
    {
        int rehash = resolve(hash, temp, "FIND");
        if (table[rehash]->status == 1 && isEqualByStudentsCodeAndGroupNumber(table[rehash]->entity, temp)) {
            cout << "index: " << rehash << "| value: " << table[rehash]->entity->key.first << "."
                << table[rehash]->entity->key.second << "." << table[rehash]->entity->key.third << " "
                << table[rehash]->entity->fullname.name + " " + table[rehash]->entity->fullname.lastname + " " + table[rehash]->entity->fullname.surname
                << " " << table[rehash]->entity->groupnumber.degree << +" " + to_string(table[rehash]->entity->groupnumber.number) + " "
                + table[rehash]->entity->groupnumber.speciality << " |status: 1" << endl;
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
            cout << "index: " << i << "| value: " << table[i]->entity->key.first << "."
                << table[i]->entity->key.second << "." << table[i]->entity->key.third << " "
                << table[i]->entity->fullname.name + " " + table[i]->entity->fullname.lastname + " " + table[i]->entity->fullname.surname
                << " " << table[i]->entity->groupnumber.degree << +" " + to_string(table[i]->entity->groupnumber.number) + " "
                + table[i]->entity->groupnumber.speciality << " |status: 1" << endl;
        }
        else
        {
            cout << "index: " << i << "| value: - "
                << " |status: 0" << endl;
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
        vector<Element*>tempTable(this->size);
        for (int i = 0; i < tempTable.size(); i++) {
            Element* temp = new Element;
            temp->entity = nullptr;
            temp->status = 0;
            tempTable[i] = temp;
        }
        for (size_t i = 0; i < this->table.size(); i++)
        {
            if (table[i]->status == 1) {
                int hash = hashFunction(table[i]->entity->fullname, table[i]->entity->groupnumber);
                if (tempTable[hash]->status == 0) {
                    tempTable[hash]->entity = table[i]->entity;
                    tempTable[hash]->status = 1;
                }
                else {
                    int j = 1;
                    int rehash = resolveExpandCollision(hash, tempTable);
                    tempTable[rehash]->entity = table[i]->entity;
                    tempTable[rehash]->status = 1;
                }
            }
        }
        this->table.clear();
        this->table = tempTable;
        tempTable.clear();
    }
}

void ClientsHashTable::insert(Entity* entity) {
    int hash = hashFunction(entity->fullname, entity->groupnumber);
    Element* element = new Element;
    element->entity = entity;
    element->status = 1;

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
        this->occupancy = (count * 100) / size;
    }
    expand();
}

void ClientsHashTable::erase(Entity* entity)
{
    int hash = hashFunction(entity->fullname, entity->groupnumber);
    int current = 0;
    int j = 1;
    if (isEqualByStudentsCodeAndGroupNumber(table[hash]->entity, entity) || table[hash]->status == 0) {
        current = hash;
    }
    else {
        current = resolve(hash, entity, "ERASE");
    }

    if (isEqualByEntity(table[current]->entity, entity))
    {
        this->count--;
        this->occupancy = (this->count / this->size) * 100;
        expand();
        j++;
        int next = secondaryHashFunction(hash, j);
        int valid = current;
        while (table[next]->status == 1) {
            if (hashFunction(table[next]->entity->fullname, table[next]->entity->groupnumber) == hash) { valid = next; }
            j++;
            next = secondaryHashFunction(hash, j);
        }
        if (current != valid)
        {
            table[current]->entity = table[valid]->entity;
            table[valid]->entity = nullptr;
            table[valid]->status = 0;
        }
        else
        {
            table[current]->entity = nullptr;
            table[current]->status = 0;
        }
    }
    else
    {
        cout << "The element to be removed was not in the table\n";
    }

}

ClientsHashTable::~ClientsHashTable()
{
    cout << "\nHash table removed\n";
    table.clear();
    table.shrink_to_fit();
}
