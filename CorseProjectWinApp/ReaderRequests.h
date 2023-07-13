#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
using namespace std;

struct listNodeElem {
    string value;
    int index;
};
struct listNode
{
    listNodeElem* field;
    listNode* ptr;
};
struct treeNode {
    treeNode* leftChild;
    treeNode* rightChild;
    int balanceFactor;
    listNode* head;
    // ??????
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



int isEqualElements(RequestsEntity* first, RequestsEntity* second) {

    //1 => frist = second   0 => first != second
    if (first->passport.series + first->passport.number == second->passport.number + second->passport.series) {
        if (first->serviceType == second->serviceType) {
            if (first->serviceName == second->serviceName) {
                return 1;
            }
            else {
                return 0;
            }
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
}


date inputDateData(string inputString) {
    date date;
    vector <int> numbers;
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '.') {
            numbers.push_back(i);
        }
    }
    date.day = inputString.substr(0, numbers.at(0));
    date.month = inputString.substr(numbers[0] + 1, (numbers[1] - 1) - numbers[0]);
    date.year = inputString.substr(numbers[1] + 1, (inputString.length() - 1) - numbers[1]);
    return date;
}

Passport inputPassportData(string inputString) {
    Passport  newPassport;
    vector <int> numbers;
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '.') {
            numbers.push_back(i);
        }
    }
    newPassport.series = stoi(inputString.substr(0, 4));
    newPassport.number = stoi(inputString.substr(4 + 1, (inputString.length() - 1) - 4));
    return newPassport;
};

RequestsEntity* inputEntityData(string inputString) {
    RequestsEntity* entity;
    entity = new RequestsEntity();
    vector <int> numbers;
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '$') {
            numbers.push_back(i);
        }
    }
    entity->passport = inputPassportData(inputString.substr(0, numbers.at(0)));
    entity->serviceType = inputString.substr(numbers[0] + 1, (numbers[1] - 1) - numbers[0]);
    entity->serviceName = inputString.substr(numbers[1] + 1, ((numbers[2] - 1) - numbers[1]));
    entity->date = inputDateData(inputString.substr(numbers[2] + 1, (inputString.length() - 1) - numbers[2]));
    return entity;
}


vector <RequestsEntity*> readFromFile(string path) {
    setlocale(LC_ALL, "Russian");
    string str;
    int n = 0;
    ifstream file(path);
    getline(file, str);
    if (!str.empty()) {
        n = stoi(str);
    }
    vector<RequestsEntity*> data(n);

    for (int i = 0; i < n; i++) {
        getline(file, str);
        RequestsEntity* newEntity = new RequestsEntity();
        newEntity = inputEntityData(str);
        data[i] = newEntity;
    }
    file.close();
    return data;
}


void writeData(vector<RequestsEntity*>  value, string dir) {
    ofstream  fout(dir);
    fout << value.size() << "\n";
    for (int i = 0; i < value.size(); i++) {
        fout << value[i]->passport.series << value[i]->passport.number << "$" << value[i]->serviceType << "$" << value[i]->serviceName << "$" << value[i]->date.day << "." << value[i]->date.month << "." << value[i]->date.year << "\n";
    }

    fout.close();

}