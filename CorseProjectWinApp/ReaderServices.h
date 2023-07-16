#pragma once
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
#include <cmath>
using namespace std;


struct treeNodeElemServices
{
    string value;
    int index;
};

struct treeNodeElemServicesInt
{
    int value;
    int index;
};

struct listServices
{
    struct treeNodeElemServices data;
    struct listServices* next;
    struct listServices* previous;
};

struct treeNodeServices
{
    char color;
    struct listServices* key;
    struct treeNodeServices* left;
    struct treeNodeServices* right;
    struct treeNodeServices* parent;
};


struct ServiceEntity
{
    string serviceType;
    string division;
    string serviceName;
    int term;
};

struct tableEntity
{
    ServiceEntity* value;
    int status;
    int index;
};


int isEqualElements(ServiceEntity* first, ServiceEntity* second);

ServiceEntity* inputServicesEntityData(string inputString);

vector <ServiceEntity*> readServicesFromFile(string path);

void writeData(vector<ServiceEntity*>  value, string dir);

bool isEqualServices(ServiceEntity* first, ServiceEntity* second);
