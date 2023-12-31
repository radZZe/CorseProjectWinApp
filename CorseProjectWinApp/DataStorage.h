#pragma once
#include "ServicesHashTable.h"
#include "RequestsHashTable.h"
#include "ServicesRBTree.h"
#include "AvlTree.h"

using namespace std;
static class DataStorage
{
public:
	static string text;
	static vector<RequestsEntity*>data;
	static vector<ServiceEntity*>dataServices;
	static RequestsHashTable requestsHashTable;
	static int countComparisons;
	static treeNodeServices* rbTreeDivision;
	static treeNodeServices* rbTreeType;
	static treeNodeServices* rbTreeName;
	static treeNodeServices* rbTreeTerm;
	static treeNodeServices* rbTreeLeaf;
	static treeNode* avlTreePassport;
	static treeNode* avlTreeDate;
	static treeNode* avlTreeServiceName;
	static treeNode* avlTreeServiceType;
	static treeNodeServices* rbTreeA;
	static int indexSearch;
	static bool resultSerch;
	void removeElement(RequestsEntity* value);
	static ServicesHashTable servicesHashTable;
};

