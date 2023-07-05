#include "DataStorage.h"
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
#include "AvlTree.h"
using namespace std;

vector<RequestsEntity*> DataStorage::data = readFromFile("stdrequests.txt");
RequestsHashTable DataStorage::requestsHashTable = RequestsHashTable(data.size());
int DataStorage::countComparisons = 0;
treeNode* DataStorage::avlTree = nullptr;