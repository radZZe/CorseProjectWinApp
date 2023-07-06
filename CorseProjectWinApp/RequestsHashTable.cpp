#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
#include <cmath>
#include "ReaderRequests.h"
#include "RequestsHashTable.h"
//#include "DataStorage.h"
using namespace std;


RequestsHashTableEntry::RequestsHashTableEntry(RequestsEntity* value, int status) {
    this->value = value;
    this->status = status;
}

RequestsHashTable::RequestsHashTable(int size) {
    this->size = size;
    data = vector<RequestsHashTableEntry*>(size);
    for (int i = 0; i < size; i++) {
        data[i] = new RequestsHashTableEntry(nullptr, 0);
    }
}

int RequestsHashTable::isPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int RequestsHashTable::countDigits(long int key)
{
    int count = 0;
    while (key != 0)
    {

        key /= 10;
        ++count;
    }
    return count;
}

int RequestsHashTable::getNthDigit(long int num, int pos)
{
    int digit = 0, fraction = 0, length;

    length = countDigits(num);
    fraction = num / (int)pow(10, (length - pos));
    digit = fraction % 10;

    return digit;

}

int RequestsHashTable::firstHashFunction(int key)
{
    int keySquare = key * key;
    int startPos = 0;
    if (this->size <= 10) {
        startPos = 5;
        int result = getNthDigit(keySquare, startPos);
        //cout << "INSERT: firstHash =" << result << "dataToKey = " << key << endl;
        if (result > this->size) result = result % this->size;
        return result;
    }
    else if (this->size <= 100 && this->size > 10) {
        startPos = 4;
        int result = getNthDigit(keySquare, startPos) * 10 + getNthDigit(keySquare, startPos + 1);
        //cout << "INSERT: firstHash =" << result << "dataToKey = " << key << endl;
        if (result > this->size) result = result % this->size;
        return result;
    }
    else if (this->size <= 1000 && this->size > 100) {
        startPos = 3;
        int result = getNthDigit(keySquare, startPos) * 100 + getNthDigit(keySquare, startPos + 1) * 10 + getNthDigit(keySquare, startPos + 2);
        //cout << "INSERT: firstHash =" << result << "dataToKey = " << key << endl;
        if (result > this->size) result = result % this->size;
        return result;
    }
}

int RequestsHashTable::doubleHashFunc(int  key) {
    if (isPrime(this->size)) {
        return 1 + (key % (this->size - 2));
    }
    else {
        int test = 1 + (key % this->size);
        return test;
    }
}

int RequestsHashTable::secondHashFunction(int j, int first, int second) { // вторичная хеш функция 
    return (first + j * second) % this->size;
}

int  RequestsHashTable::dataToKey(string serviceName, string serviceType, Passport passport,date date) {
    int result = 0;
    for (int i = 0; i < serviceName.size(); i++) {
        result += abs(serviceName[i]);
    }
    for (int i = 0; i < serviceType.size(); i++) {
        result += abs(serviceType[i]);
    }
    string passportSeries = to_string(passport.series);
    string passportNumber = to_string(passport.number);
    for (int i = 0; i < passportSeries.size(); i++) {
        char num = passportSeries[i];
        result += num;
    }
    for (int i = 0; i < passportNumber.size(); i++) {
        char num = passportNumber[i];
        result += num;
    }
    result += stoi(date.day);
    result += stoi(date.month);
    result += stoi(date.year);
    return result;
};

bool RequestsHashTable::isEqualFirstHash(RequestsEntity* first, RequestsEntity* second) {
    if (firstHashFunction(dataToKey(first->serviceName, first->serviceType, first->passport,first->date)) == firstHashFunction(dataToKey(second->serviceName, second->serviceType, second->passport,second->date))) {
        return true;
    }
    else {
        return false;
    }
}

RequestsHashTable::~RequestsHashTable() {
    cout << endl;
    data.clear();
    data.shrink_to_fit();
}

void RequestsHashTable::insert(RequestsEntity* value) {
    int counter = 0;
    int key = dataToKey(value->serviceName, value->serviceType, value->passport,value->date);
    int index = firstHashFunction(key);
    if (data[index]->status != 1) {
        data[index]->value = value;
        data[index]->status = 1;
    }
    else {
        insertCollision(counter, index, key, value);
    }



}

void RequestsHashTable::insertCollision(int _counter, int _index, int _key, RequestsEntity* value) {
    int counter = _counter;
    int index = _index;
    int key = _key;
    int secondHash = doubleHashFunc(key);
    index = secondHash;
    while ((counter <= size) && ((data[index]->status == 1)) && data[index]->status != 0) {
        //cout << "INSERT: try =" << counter << " index = " << index << "value key = " << value->key.firstField << " " << value->key.secondField << " " << value->key.thirdField << endl;
        if (isEqualElements(data[index]->value, value)) {
            cout << "EXCEPTION : such an element is already in place " << endl;
            break;
        }
        index = secondHashFunction(counter, _index, secondHash);
        counter++;
    }
    if (counter > size) {
        cout << "EXCEPTION : stack overflow " << endl;
    }
    else {
        data[index]->value = value;
        data[index]->status = 1;
    }
}

void RequestsHashTable::remove(RequestsEntity* value) {
    int counter = 1;
    int key = dataToKey(value->serviceName, value->serviceType, value->passport,value->date);
    int firstHash = firstHashFunction(key);
    int secondHash = doubleHashFunc(key);
    if (isEqualElements(data[firstHash]->value, value)) {
        shiftElements(secondHash, firstHash, value);
    }
    else {
        removeCollision(secondHash, firstHash, value);
    }
}

void RequestsHashTable::shiftElements(int secondHash, int delIndex, RequestsEntity* value) {
    int tempIndex = 0;
    int index = delIndex;
    int counter = 1;
    do {
        if (data[index]->status != 0) {
            if (isEqualFirstHash(data[index]->value, value)) tempIndex = index;
        }
        index = secondHashFunction(counter, delIndex, secondHash);
        counter++;
    } while (counter <= size && data[index]->status != 0);
    data[delIndex]->value = data[tempIndex]->value;
    data[delIndex]->status = data[tempIndex]->status;
    data[tempIndex]->value = nullptr;
    data[tempIndex]->status = 0;
}

void RequestsHashTable::removeCollision(int secondHash, int firstHash, RequestsEntity* value) {
    int tempIndex = 0;
    int index = firstHash;
    int counter = 1;
    int delIndex = -1;
    do {
        if (data[index]->status != 0) {
            if (isEqualElements(data[index]->value, value)) delIndex = index;
            if (isEqualFirstHash(data[index]->value, value)) tempIndex = index;
        }
        index = secondHashFunction(counter, firstHash, secondHash);
        counter++;

    } while (index != firstHash && counter <= size && data[index]->status != 0);
    data[delIndex]->value = data[tempIndex]->value;
    data[delIndex]->status = data[tempIndex]->status;
    data[tempIndex]->value = nullptr;
    data[tempIndex]->status = 0;
}

vector<int> RequestsHashTable::search(RequestsEntity* value) {
    int counterComparisons = 0;
    int counter = 0;
    int key = dataToKey(value->serviceName, value->serviceType, value->passport,value->date);
    int firstIndex = firstHashFunction(key);
    int index = firstIndex;
    int secondHash = doubleHashFunc(key);
    int resultIndex = index;
    vector<int> result;
    if (data[index]->status != 0) {
        if (isEqualElements(data[index]->value, value)) {
            counterComparisons++;
            cout << "Element was found | index = " << index << endl;
            result.push_back(counterComparisons);
            result.push_back(index);
            return result;
        }
        else {
            while (data[index]->status != 0 && counter < size) {
                if (isEqualElements(data[index]->value, value) == 1) {
                    resultIndex = index;
                    break;
                }
                index = secondHashFunction(counter, firstIndex, secondHash);
                counterComparisons++;
                counter++;
            }
            if (counter >= size) {
                cout << "ELement was not found" << endl;
                result.push_back(counterComparisons);
                result.push_back(-1);
                return result;
            }
            else {
                cout << "Element was found | index = " << resultIndex << endl;
                if (resultIndex != firstIndex) {
                    
                    result.push_back(counterComparisons);
                    result.push_back(resultIndex);
                    return result;
                }
                else {
                    result.push_back(counterComparisons);
                    result.push_back(-1);
                    return result;
                }

            }
        }
    }
    else {
        result.push_back(counterComparisons);
        result.push_back(-1);
        return result;
    }
}

void RequestsHashTable::print() {
    for (int i = 0; i < size; i++) {
        if (data[i]->status != 0) {
            cout << "index: " << i << "| value: " << data[i]->value->passport.series << " " << data[i]->value->passport.number << " " << data[i]->value->serviceType << " " << data[i]->value->serviceName << " " << data[i]->value->date.day + "." + data[i]->value->date.month + "." + data[i]->value->date.year << " |status:1" << " |firstHash = " << firstHashFunction(dataToKey(data[i]->value->serviceName, data[i]->value->serviceType, data[i]->value->passport,data[i]->value->date));
            cout << "index: " << i << " date" << data[i]->value->date.day + "." + data[i]->value->date.month + "." + data[i]->value->date.year;
            cout << endl;
        }
        else {
            cout << "index: " << i << "| value: - " << " |status:0";
            cout << endl;
        }

    }
}



