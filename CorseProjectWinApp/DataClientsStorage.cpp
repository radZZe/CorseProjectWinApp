#include "DataClientsStorage.h"
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
using namespace std;

vector<ClientsEntity*> DataClientsStorage::data = readFromFileClients("stdclients.txt");
ClientsHashTable DataClientsStorage::clientsHashTable = ClientsHashTable(data.size());
int DataClientsStorage::countComparisons = 0;
//Node* DataClientsStorage::nullnode = null_init();
//Node* DataClientsStorage::rbt = root_init(DataClientsStorage::nullnode);
bool DataClientsStorage::resultSearch = false;
Node* DataClientsStorage::rbtClient = nullptr;
Node* DataClientsStorage::rbtEmail = nullptr;
Node* DataClientsStorage::rbtJob = nullptr;
Node* DataClientsStorage::rbtPassport = nullptr;
Node* DataClientsStorage::rbtFullname = nullptr;
Node* DataClientsStorage::rbtNullnode = null_init();
int DataClientsStorage::index = -1;
void DataClientsStorage::removeElement(ClientsEntity* value) {
	auto it = find(this->data.begin(), this->data.end(), value);
	this->data.erase(it);

}