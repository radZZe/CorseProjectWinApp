#include "DataClientsStorage.h"
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
using namespace std;

vector<ClientsEntity*> DataClientsStorage::data = readFromFile("stdclients.txt");
ClientsHashTable DataClientsStorage::clientsHashTable = ClientsHashTable(data.size());
int DataClientsStorage::countComparisons = 0;
//Node* DataClientsStorage::nullnode = null_init();
//Node* DataClientsStorage::rbt = root_init(DataClientsStorage::nullnode);
bool DataClientsStorage::resultSearch = false;
void DataClientsStorage::removeElement(ClientsEntity* value) {
	auto it = find(this->data.begin(), this->data.end(), value);
	this->data.erase(it);

}