#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
using namespace std;


struct treeNodeElemServices
{
    string value;
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


int isEqualElements(ServiceEntity* first, ServiceEntity* second);

ServiceEntity* inputServicesEntityData(string inputString);

vector <ServiceEntity*> readServicesFromFile(string path);

void writeData(vector<ServiceEntity*>  value, string dir);
