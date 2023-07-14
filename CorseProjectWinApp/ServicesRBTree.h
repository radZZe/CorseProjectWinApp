#pragma once
#include "ReaderServices.h"
#include "DataStorage.h"

using namespace std;

listServices* initListServices();

treeNodeServices* initLeaf();

bool isLastElement(listServices*& head);

listServices* deleteListElement(listServices* head, treeNodeElemServices givenData);
bool searchServiceInList(listServices* head, ServiceEntity* element, int& count);
void printList(listServices* head);
int compareData(treeNodeElemServices key1, treeNodeElemServices key2);
listServices* addInOrder(listServices*& head, treeNodeElemServices element);

listServices* deleteList(struct listServices*& head);

listServices* deleteRepeatedElement(listServices*& head);
treeNodeServices* initTree(treeNodeServices* leaf);

treeNodeServices* findMaxLeft(treeNodeServices* rootLeft, treeNodeServices* leaf);

void printTreeA(treeNodeServices*& root, int h, treeNodeServices*& leaf);

bool search(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int& count, ServiceEntity* fullEntity);

void leftRotate(treeNodeServices*& root, treeNodeServices* x, treeNodeServices*& leaf);
void rightRotate(treeNodeServices*& root, treeNodeServices* x, treeNodeServices*& leaf);

void insertFixup(treeNodeServices*& root, treeNodeServices*& z, treeNodeServices*& leaf);

treeNodeServices* insert(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, ServiceEntity* fullEntity);

void transplant(treeNodeServices*& root, treeNodeServices*& u, treeNodeServices*& v, treeNodeServices*& leaf);
void deleteFixup(treeNodeServices*& root, treeNodeServices*& x, treeNodeServices*& leaf);

void deleteElement(treeNodeServices*& root, treeNodeElemServices value, treeNodeServices*& leaf, ServiceEntity* fullEntity);

void deleteTree(treeNodeServices*& root, treeNodeServices* leaf, ServiceEntity* fullEntity);

bool compareTrees(treeNodeServices*& root1, treeNodeServices*& root2, treeNodeServices* leaf, bool& flag);