#pragma once
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
using namespace std;
struct listNodeElem {
    string value;
    int index;
};
struct listNode
{
    listNodeElem* field;
    listNode* ptr;
};
struct treeNode {
    treeNode* leftChild;
    treeNode* rightChild;
    int balanceFactor;
    listNode* head;
    // список
};
struct Trunk
{
    Trunk* prev;
    string str;

    Trunk(Trunk* prev, string str)
    {
        this->prev = prev;
        this->str = str;
    }
};

struct Passport {
    int series;
    int number;
};

struct date {
    string day;
    string month;
    string year;
};

struct RequestsEntity {
    Passport passport;
    string serviceType;
    string serviceName;
    date date;
}; 


int isEqualElements(RequestsEntity* first, RequestsEntity* second);


date inputDateData(string inputString);

Passport inputPassportData(string inputString);

RequestsEntity* inputEntityData(string inputString);


vector <RequestsEntity*> readFromFile(string path);


void writeData(vector<RequestsEntity*> value, string dir);

