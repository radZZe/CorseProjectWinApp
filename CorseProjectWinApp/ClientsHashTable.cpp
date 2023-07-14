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
        table[i] = emptyElement;
    }
}

//bool isEqualByStudentsCodeAndGroupNumber(Entity* first, Entity* second)
//{
//    if (first == nullptr || second == nullptr) {
//        return false;
//    }
//    if (first->fullname.name + first->fullname.surname + first->fullname.lastname == second->fullname.name + second->fullname.surname + second->fullname.lastname)
//    {
//        if (first->groupnumber.degree == second->groupnumber.degree)
//        {
//            if (first->groupnumber.number == second->groupnumber.number)
//            {
//                if (first->groupnumber.speciality == second->groupnumber.speciality)
//                {
//                    return true;
//                }
//                else
//                {
//                    return false;
//                }
//            }
//            else
//            {
//                return false;
//            }
//        }
//        else
//        {
//            return false;
//        }
//    }
//    else
//    {
//        return false;
//    }
//
//}

//bool ClientsHashTable::isEqualByValue(ClientsEntity* first, ClientsEntity* second)
//{
//    if (first->key.first == second->key.first && first->key.second == second->key.second && first->key.third == second->key.third && isEqualByStudentsCodeAndGroupNumber(first, second))
//    {
//        return true;
//    }
//    return false;
//}

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
            << " " <<table[hash]->value->passport.number << " |status: 1" << endl;
        return true;
    }
    else
    {
        int rehash = resolve(hash, temp->value, "FIND");
        if (table[rehash]->status == 1 && isEqualElementsClients(table[rehash]->value, temp->value)) {
            cout << "index: " << hash << "| value: " << table[hash]->value->fullname.surname << " "
                << table[hash]->value->fullname.name << " " << table[hash]->value->fullname.lastname << " "
                << table[hash]->value->job << " " << table[hash]->value->email << " " << table[hash]->value->passport.series
                << " " << table[hash]->value->passport.number << " |status: 1" << endl;
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
                << " " << table[i]->value->passport.number << " |status: 1" << endl;
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
                    tempTable[hash]->status = 1;
                }
                else {
                    int j = 1;
                    int rehash = resolveExpandCollision(hash, tempTable);
                    tempTable[rehash]->value = table[i]->value;
                    tempTable[rehash]->status = 1;
                }
            }
        }
        this->table.clear();
        this->table = tempTable;
        tempTable.clear();
    }
}

void ClientsHashTable::insert(ClientsEntity* entity) {
    int hash = hashFunction(entity->fullname,entity->job, entity->email, entity->passport);
    //int hash = 0;
    ClientsHashTableEntry* element = new ClientsHashTableEntry(entity,1);

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

void ClientsHashTable::erase(ClientsEntity* entity)
{
    int hash = hashFunction(entity->fullname,entity->job, entity->email, entity->passport);
    int current = 0;
    int j = 1;
    if (isEqualElementsClients(table[hash]->value, entity) || table[hash]->status == 0) {
        current = hash;
    }
    else {
        current = resolve(hash, entity, "ERASE");
    }

    if (isEqualElementsClients(table[current]->value, entity))
    {
        this->count--;
        this->occupancy = (this->count / this->size) * 100;
        expand();
        j++;
        int next = secondaryHashFunction(hash, j);
        int valid = current;
        while (table[next]->status == 1) {
            if (hashFunction(table[next]->value->fullname, table[next]->value->job, table[next]->value->email, table[next]->value->passport) == hash) { valid = next; }
            j++;
            next = secondaryHashFunction(hash, j);
        }
        if (current != valid)
        {
            table[current]->value = table[valid]->value;
            table[valid]->value = nullptr;
            table[valid]->status = 0;
        }
        else
        {
            table[current]->value = nullptr;
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