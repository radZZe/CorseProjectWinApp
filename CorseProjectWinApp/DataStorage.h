#pragma once
#include <string>
#include "RequestsHashTable.h"
#include <vector>
#include "AvlTree.h"
static class DataStorage
{
public:
	static string text;
	static vector<RequestsEntity*>data;
	static RequestsHashTable requestsHashTable;
	static int countComparisons;
	static treeNode* avlTree;
	static bool resultSerch;
	void removeElement(RequestsEntity* value);
};

