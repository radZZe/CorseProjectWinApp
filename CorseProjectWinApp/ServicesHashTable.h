#pragma once
#include <cmath>
#include "ReaderServices.h"
//#include "DataStorage.h"

using namespace std;

class ServicesHashTable
{
public:
    int size;
    int originSize;
    int filled = 0;
    vector<tableEntity> table;
    int hashFun(ServiceEntity* item);
    int secHashFun(int hash, int step);
    int calculateOccupancy();
    int findPlace(int hash);
    void insertResolveCollision(ServiceEntity* item, string type, int index);
    void resizeTable(int occupancy, ServiceEntity* item, string type, int index);
    int checkAnotherChain(int index);
    ServicesHashTable(int tableSize);
    ~ServicesHashTable();
    vector<int> findItem(ServiceEntity* data);
    bool findItemByKey(ServiceEntity* item);
    void htInsertA(ServiceEntity* item, string type, int index);
    void deleteItem(ServiceEntity* item);
    void printTable();
};
