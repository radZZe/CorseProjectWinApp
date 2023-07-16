#pragma once
#include <string>
#include "ReaderClients.h"

using namespace std;

int comparator(string first, string second);
List_node* list_init();
bool in(List_node* root, string input);
List_node* list_insert(List_node*& root, RBTData input);
List_node* list_erase(List_node*& root, Key value);
int counter(List_node* root, Key value);
void print_list(List_node* root);
Key parse_key(string input);
Node* root_init(Node* nullnode);
Node* null_init();
bool pre_search(Node* root, Node* nullnode, string input,int& count);
void rightRotate(Node* element, Node*& root, Node* nullnode);
void leftRotate(Node* element, Node*& root, Node* nullnode);
void insert_balance(Node*& element, Node*& root, Node* nullnode);
Node* insertClient(Node*& root, Node* nullnode, RBTData input);
void transplant(Node*& root, Node* nullnode, Node* u, Node* v);
void erase_balance(Node*& root, Node* nullnode, Node* element);
Node* right_min(Node* element, Node* nullnode);
Node* memory_erase(Node*& root, Node* nullnode, Key key);
Node* eraseClient(Node*& root, Node* nullnode, RBTData dataValue);
int get_height(Node* root);
void pre_memory_pull_up(Node*& root, Node* nullnode);
void memory_pull_up(Node*& root, Node* nullnode);
void print(Node* root, Node* nullnode, int h, int ln);
//int updateClientTreeNode(Node* root, Node* nullnode, string input, int& index);
int updateTreeNode(Node* root, Node* nullnode, ClientsEntity* input,string comparable, int& index);
//int updateJobTreeNode(Node* root, Node* nullnode, string input, int& index);
//int updateEmailTreeNode(Node* root, Node* nullnode, string input, int& index);
//int updateFullnameTreeNode(Node* root, Node* nullnode, string input, int& index);
void debugPrintRBTClient(Node* root, Node* nullnode, ofstream& fout, int h, int ln);
void debugPrintList(List_node* root, ofstream& fout);