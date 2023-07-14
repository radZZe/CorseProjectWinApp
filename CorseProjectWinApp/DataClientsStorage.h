#pragma once
#include <string>
#include "ReaderClients.h"
#include "ClientsHashTable.h"
#include <vector>
#include "RBT.h"
static class DataClientsStorage
{
public:
	static vector<ClientsEntity*>data;
	static ClientsHashTable clientsHashTable;
	static int countComparisons;
	//Node* nullnode = null_init();
	//Node* root = root_init(nullnode);
	static Node* rbtPassport;
	static Node* rbtJob;
	static Node* rbtFullname;
	static Node* rbtEmail;
	static Node* rbtNullnode;
	static Node* rbtClient;
	static bool resultSearch;
	void removeElement(ClientsEntity* value);
private:
	Node* nullnode = null_init();
};