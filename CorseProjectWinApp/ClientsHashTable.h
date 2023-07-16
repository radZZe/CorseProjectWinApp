#pragma once
#include <vector>
#include "ReaderClients.h"

class ClientsHashTableEntry {
public:
    ClientsEntity* value;
    int status;
    int index;
    ClientsHashTableEntry(ClientsEntity* value, int status);
};

class ClientsHashTable
{

public:
    ClientsHashTable(int size);
    void insert(ClientsEntity* entity, int index);
    void deleteEntity(ClientsEntity* entity);
    void print();
    void debugPrint(ofstream& fout);
    bool find(Fullname fullname, string job, string email, ClientPassport passport);
    void changeIndex(ClientsEntity* clientEntity, int index, int lastindex);
    ~ClientsHashTable();
private:
    int size;
    vector<ClientsHashTableEntry*>table;
    int initsize;
    int occupancy;
    int count;
    int check(int index);
    //bool isEqualStudentsCodeAndGroupNumber(Fullname firstFullname, Fullname secondFullname, GroupNumber firstGroupNumber, GroupNumber secondGroupNumber);
    void expand();
    int hashFunction(Fullname fullname, string job, string email, ClientPassport passport);
    //int resolveCollision(int hash,Entity* entity,string type);
    int resolveExpandCollision(int hash, vector<ClientsHashTableEntry*>table);
    int resolve(int hash, ClientsEntity* entity, string type);
    int secondaryHashFunction(int hash, int j);
    bool isEqualByEntity(ClientsEntity* first, ClientsEntity* second);

};