#pragma once
#include <string>
#include "ReaderClients.h"
#include "ClientsHashTable.h"
#include <vector>
#include "RBT.h"
static class DataClientsStorage
{
public:
	static string text;
	static vector<ClientsEntity*>data;
	static ClientsHashTable clientsHashTable;
	static int countComparisons;
	//Node* nullnode = null_init();
	//Node* root = root_init(nullnode);
	Node* rbt = root_init(nullnode);
	static bool resultSearch;
	void removeElement(ClientsEntity* value);
private:
	Node* nullnode = null_init();
};