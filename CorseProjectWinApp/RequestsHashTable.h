
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
#include <cmath>
#include "ReaderRequests.h"
using namespace std;


class RequestsHashTableEntry {
public:
    RequestsEntity* value;
    int status;
    RequestsHashTableEntry(RequestsEntity* value, int status);
};


class RequestsHashTable { // Статическая

public:
    int size;
    vector<RequestsHashTableEntry*> data;
    int dataToKey(string serviceName, string serviceType, Passport passport, date date);
    int isPrime(int num);
    int countDigits(long int key);
    int getNthDigit(long int num, int pos);
    int firstHashFunction(int key);
    int doubleHashFunc(int  key);
    int secondHashFunction(int j, int first, int second);
    bool isEqualFirstHash(RequestsEntity* first, RequestsEntity* second);
    RequestsHashTable(int size);
    ~RequestsHashTable();
    void insert(RequestsEntity* value);
    void insertCollision(int _counter, int _index, int _key, RequestsEntity* value);
    void remove(RequestsEntity* value);
    void shiftElements(int secondHash, int delIndex, RequestsEntity* value);
    void removeCollision(int secondHash, int firstHash, RequestsEntity* value);
    vector<int> search(RequestsEntity* value);
    void print();
};

