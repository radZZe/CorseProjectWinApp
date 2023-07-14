#pragma once
#include <vector>
#include "ReaderClients.h"

class ClientsHashTableEntry {
public:
    ClientsEntity* value;
    int status;
    ClientsHashTableEntry(ClientsEntity* value, int status);
};

class ClientsHashTable
{

public:
    ClientsHashTable(int size);
    void insert(ClientsEntity* entity);
    void print();
    void erase(ClientsEntity* entity);
    bool find(Fullname fullname, string job, string email, ClientPassport passport); 
    //~ClientsHashTable();
private:
    int size;
    vector<ClientsHashTableEntry*>table;
    int initsize;
    int occupancy;
    int count;
    //bool isEqualStudentsCodeAndGroupNumber(Fullname firstFullname, Fullname secondFullname, GroupNumber firstGroupNumber, GroupNumber secondGroupNumber);
    void expand();
    int hashFunction(Fullname fullname, string job, string email, ClientPassport passport);
    //int resolveCollision(int hash,Entity* entity,string type);
    int resolveExpandCollision(int hash, vector<ClientsHashTableEntry*>table);
    int resolve(int hash, ClientsEntity* entity, string type);
    int secondaryHashFunction(int hash, int j);
    bool isEqualByEntity(ClientsEntity* first, ClientsEntity* second);

};