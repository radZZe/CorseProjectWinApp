#pragma once
#include "ReaderRequests.h"
#include "DataStorage.h"
using namespace std;

int _compareDate(date first, date second);
int _compareKeys(listNodeElem* first, listNodeElem* second);
listNode* initList();
listNode* addElemToEnd(listNode*& head, listNodeElem* value);
void  delElem(listNode*& head);
void listPrint(listNode* head);
listNode* deleteList(struct listNode*& head);
treeNode* initTree();
void addNode(treeNode*& pointer, listNodeElem* key, bool& heightChanged);
void _showTrunks(Trunk* p);
void printTree(treeNode* root, Trunk* prev);
void _deleteTree(treeNode*& pointer);
treeNode* deleteTree(treeNode*& root);
void _del_balanceLeft(treeNode*& node, bool& heightChanged);
void _del_balanceRight(treeNode*& node, bool& heightChanged);
void _delWhenTwoChild(treeNode*& node, bool& heightChanged, treeNode*& delNode);
void delNode(treeNode*& pointer, listNodeElem* key, bool& heightChanged);
void _nodeCounter(treeNode* pointer, int& count);
void whichSubtreeIsBigger(treeNode* pointer);
int searchByPassportTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& count);
int searchByDateTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& count);
int searchByServiceNameTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& count);
int searchByServiceTypeTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& count);
int updateByPassportTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& index);
int updateServiceTypeTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& index);
int updateServiceNameTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& index);
int updateByDateTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& index);
