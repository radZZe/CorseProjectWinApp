#include "DataStorage.h"
using namespace std;

vector<RequestsEntity*> DataStorage::data = readFromFile("stdrequests.txt");
vector<ServiceEntity*> DataStorage::dataServices = readServicesFromFile("stdservices.txt");
RequestsHashTable DataStorage::requestsHashTable = RequestsHashTable(data.size());
int DataStorage::countComparisons = 0;
treeNode* DataStorage::avlTree = nullptr;
treeNodeServices* DataStorage::rbTreeDivision = nullptr;
treeNodeServices* DataStorage::rbTreeName = nullptr;
treeNodeServices* DataStorage::rbTreeType = nullptr;
treeNodeServices* DataStorage::rbTreeTerm = nullptr;
treeNodeServices* DataStorage::rbTreeLeaf = nullptr;
bool DataStorage::resultSerch = false;
void DataStorage::removeElement(RequestsEntity* value) {
	auto it = find(this->data.begin(), this->data.end(), value);
    if (it != this->data.end()) {
        *it = data.back();
        data.pop_back();
    }
    int jopa = 5;
}