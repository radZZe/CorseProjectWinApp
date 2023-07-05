#pragma once
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
using namespace std;
struct Passport {
    int series;
    int number;
};

struct date {
    string day;
    string month;
    string year;
};

struct RequestsEntity {
    Passport passport;
    string serviceType;
    string serviceName;
    date date;
}; 


int isEqualElements(RequestsEntity* first, RequestsEntity* second);


date inputDateData(string inputString);

Passport inputPassportData(string inputString);

RequestsEntity* inputEntityData(string inputString);


vector <RequestsEntity*> readFromFile(string path);


void writeData(int value, string dir, bool count);

