#pragma once
#include <vector>
#include "ReaderClients.h"

class ClientsHashTable
{

public:
    ClientsHashTable(int size);
    ~ClientsHashTable();
    void insert(Entity* entity);
    void print();
    void erase(Entity* entity);
    bool find(Fullname fullname, GroupNumber groupNumber);
private:
    vector<Element*>table;
    int size;
    int initsize;
    int occupancy;
    int count;
    //bool isEqualStudentsCodeAndGroupNumber(Fullname firstFullname, Fullname secondFullname, GroupNumber firstGroupNumber, GroupNumber secondGroupNumber);
    void expand();
    int hashFunction(Fullname fullname, GroupNumber groupnumber);
    //int resolveCollision(int hash,Entity* entity,string type);
    int resolveExpandCollision(int hash, vector<Element*>table);
    int resolve(int hash, Entity* entity, string type);
    int secondaryHashFunction(int hash, int j);
    bool isEqualByEntity(Entity* first, Entity* second);
};