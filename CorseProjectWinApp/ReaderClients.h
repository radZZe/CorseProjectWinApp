#pragma once
#include <string>

using namespace std;

struct Key {
	int first;
	int second;
	int third;
};

struct Fullname {
	string name;
	string surname;
	string lastname;
};

struct GroupNumber {
	string degree;
	int number;
	string speciality;
};

struct Entity {
	Key key;
	Fullname fullname;
	GroupNumber groupnumber;
};

struct Element {
	Entity* entity;
	int status;
};

struct List_node {
	Key keys;
	List_node* next;
	int cnt;
};

struct Node {
	List_node* data;
	Node* parent;
	Node* left;
	Node* right;
	int color;// 1 - Black
};