#pragma once
#include "ReaderRequests.h"
using namespace std;
struct listNode
{
    RequestsEntity* field;
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
int _compareDate(date first, date second);
int _compareKeys(RequestsEntity* first, RequestsEntity* second);
listNode* initList();
listNode* addElemToEnd(listNode*& head, RequestsEntity* value);
void  delElem(listNode*& head);
void listPrint(listNode* head);
listNode* deleteList(struct listNode*& head);
treeNode* initTree();
void addNode(treeNode*& pointer, RequestsEntity* key, bool& heightChanged);
void _showTrunks(Trunk* p);
void printTree(treeNode* root, Trunk* prev);
void _deleteTree(treeNode*& pointer);
treeNode* deleteTree(treeNode*& root);
void _del_balanceLeft(treeNode*& node, bool& heightChanged);
void _del_balanceRight(treeNode*& node, bool& heightChanged);
void _delWhenTwoChild(treeNode*& node, bool& heightChanged, treeNode*& delNode);
void delNode(treeNode*& pointer, RequestsEntity* key, bool& heightChanged);
void _nodeCounter(treeNode* pointer, int& count);
void whichSubtreeIsBigger(treeNode* pointer);
bool searchTreeNode(treeNode* pointer, RequestsEntity* givenValue);
bool searchByPassportTreeNode(treeNode* pointer, RequestsEntity* givenValue);
bool searchByDateTreeNode(treeNode* pointer, RequestsEntity* givenValue);
bool searchByServiceNameTreeNode(treeNode* pointer, RequestsEntity* givenValue);
bool searchByServiceTypeTreeNode(treeNode* pointer, RequestsEntity* givenValue);
