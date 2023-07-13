#include "DataStorage.h"
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
using namespace std;

vector<RequestsEntity*> DataStorage::data = readFromFile("stdrequests.txt");
RequestsHashTable DataStorage::requestsHashTable = RequestsHashTable(data.size());
int DataStorage::countComparisons = 0;
treeNode* DataStorage::avlTree = nullptr;
bool DataStorage::resultSerch = false;
void DataStorage::removeElement(RequestsEntity* value) {
	auto it = find(this->data.begin(), this->data.end(), value);
    if (it != this->data.end()) {
        *it = data.back();
        data.pop_back();
    }
    int jopa = 5;
}