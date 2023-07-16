#pragma once
#include <string>
#include <vector>

using namespace std;

struct Fullname {
	string name;
	string surname;
	string lastname;
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

bool isValidateData(int passportSeries, int passportNumber, string fullnamestr, string email, string job);