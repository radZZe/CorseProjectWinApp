#pragma once
#include "ReaderServices.h"
#include "DataStorage.h"

using namespace std;

listServices* initListServices();

treeNodeServices* initLeaf();

bool isLastElement(listServices*& head);
int compareTerm(treeNodeElemServices one, treeNodeElemServices two);

listServices* deleteListElement(listServices* head, ServiceEntity* givenData);
bool searchServiceInList(listServices* head, ServiceEntity* element, int& count);
void printList(listServices* head);
int compareData(treeNodeElemServices key1, treeNodeElemServices key2);
listServices* addInOrder(listServices*& head, treeNodeElemServices element);

listServices* deleteList(struct listServices*& head);

listServices* deleteRepeatedElement(listServices*& head);
treeNodeServices* initTree(treeNodeServices* leaf);

treeNodeServices* findMaxLeft(treeNodeServices* rootLeft, treeNodeServices* leaf);

void printTreeA(treeNodeServices*& root, int h, treeNodeServices*& leaf);
void debugPrintTreeA(treeNodeServices*& root, int h, treeNodeServices*& leaf, ofstream& fout);

bool search(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int& count, ServiceEntity* fullEntity);

void leftRotate(treeNodeServices*& root, treeNodeServices* x, treeNodeServices*& leaf);
void rightRotate(treeNodeServices*& root, treeNodeServices* x, treeNodeServices*& leaf);

void insertFixup(treeNodeServices*& root, treeNodeServices*& z, treeNodeServices*& leaf);

treeNodeServices* insert(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf);

void transplant(treeNodeServices*& root, treeNodeServices*& u, treeNodeServices*& v, treeNodeServices*& leaf);
void deleteFixup(treeNodeServices*& root, treeNodeServices*& x, treeNodeServices*& leaf);

void deleteElement(treeNodeServices*& root, treeNodeElemServices value, treeNodeServices*& leaf, ServiceEntity* fullEntity);

void deleteTree(treeNodeServices*& root, treeNodeServices* leaf, ServiceEntity* fullEntity);

bool compareTrees(treeNodeServices*& root1, treeNodeServices*& root2, treeNodeServices* leaf, bool& flag);

int updateServiceIndexInList(listServices* head, ServiceEntity* element, int& index);

int updateByServiceNameTreeNode2(treeNodeServices*& root, treeNodeServices*& leaf, ServiceEntity* fullEntity, int& index);

int updateByServiceTypeTreeNode2(treeNodeServices*& root, treeNodeServices*& leaf, ServiceEntity* fullEntity, int& index);

int updateByServiceDivisionTreeNode(treeNodeServices*& root, treeNodeServices*& leaf, ServiceEntity* fullEntity, int& index);

int updateByServiceTermTreeNode(treeNodeServices*& root, treeNodeServices*& leaf, ServiceEntity* fullEntity, int& index);

bool _searchServiceInList(listServices* head, treeNodeElemServices element, int& count);

bool _search(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int& count);

void deleteTerm(treeNodeServices*& root, treeNodeElemServices value, treeNodeServices*& leaf, ServiceEntity* fullEntity);
treeNodeServices* insertTerm(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf);
bool _searchTerm(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int& count);
bool searchTerm(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int& count, ServiceEntity* fullEntity);
void debugPrintList(listServices* head, ofstream& fout);