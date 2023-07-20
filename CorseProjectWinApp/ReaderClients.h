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

struct RBTData
{
	string value;
	int index;
};

struct List_node {
	RBTData key;
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

//struct ClientsPassport {
//	int series;
//	int number;
//};

//struct date {
//	string day;
//	string month;
//	string year;
//};

struct ClientPassport {
	int number;
	int series;
};

struct ClientsEntity {
	ClientPassport passport;
	Fullname fullname;
	string email;
	string job;
};

//struct 

bool isEqualElementsClients(ClientsEntity* first, ClientsEntity* second);
//date inputDateData(string input);

ClientPassport inputPassportClients(string input);

Fullname inputFullnameData(string input);

ClientsEntity* inputEntityDataClients(string input);

vector<ClientsEntity*> readFromFileClients(string path);

void writeDataClient(vector<ClientsEntity*> value, string path);

bool isValidateData(string passSerstr, string passNumstr, string fullnamestr, string email, string job);

bool isValidatePassport(string passSerstr, string passNumstr);

bool isValidateEmail(string email);

bool isValidateFullnameOrJob(string fullnamestr);