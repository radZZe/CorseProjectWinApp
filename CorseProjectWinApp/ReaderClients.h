#pragma once
#include <string>
#include <vector>

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

struct Passport {
	int series;
	int number;
};

struct date {
	string day;
	string month;
	string year;
};

struct ClientsEntity {
	Passport passport;
	Fullname fullname;
	string email;
	string job;
};

bool isEqualElements(ClientsEntity* first, ClientsEntity* second);
//date inputDateData(string input);

Passport inputPassportData(string input);

Fullname inputFullnameData(string input);

ClientsEntity* inputEntityData(string input);

vector<ClientsEntity*> readFromFile(string path);

void writeData(vector<ClientsEntity*> value, string path);