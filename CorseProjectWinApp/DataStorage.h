#pragma once
#include <string>
#include "RequestsHashTable.h"
#include <vector>
static class DataStorage
{
public:
	static string text;
	static vector<RequestsEntity*>data;
	static RequestsHashTable requestsHashTable;
	static int countComparisons;
};

