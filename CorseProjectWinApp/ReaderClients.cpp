#pragma once
#include "ReaderClients.h"
#include <regex>
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>

using namespace std;



ClientPassport inputPassportClients(string input) {
    ClientPassport passport;
    vector <int> numbers;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '.') {
            numbers.push_back(i);
        }
    }
    int series = stoi(input.substr(0, 4));
    int number = stoi(input.substr(4 , (input.length()) - 4));
    //return { series,number };
    passport.number = number;
    passport.series = series;
    return passport;
};

bool isEqualElementsClients(ClientsEntity* first, ClientsEntity* second) {

    //1 => frist = second   0 => first != second
    if (first == nullptr || second == nullptr)
    {
        return false;
    }
    if (first->passport.series + first->passport.number == second->passport.number + second->passport.series)
    {
        if (first->fullname.surname + first->fullname.name + first->fullname.lastname == second->fullname.surname + second->fullname.name + second->fullname.lastname)
        {
            if (first->job == second->job)
            {
                if (first->email == second->email)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

Fullname inputFullnameData(string input)
{
    regex pattern("^\\s+|\\s+$");
    input = regex_replace(input, pattern, "");
    int countShifts = 0;
    string lastname;
    string name;
    string surname;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == ' ')countShifts++;
        if (countShifts == 0)
        {
            surname += input[i];
        }
        if (countShifts == 1)
        {
            name += input[i];
        }
        if (countShifts == 2)
        {
            lastname += input[i];
        }
    }
    return { name,surname,lastname };
}





ClientsEntity* inputEntityDataClients(string input) {
    ClientsEntity* entity;
    entity = new ClientsEntity();
    vector <int> numbers;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '$') {
            numbers.push_back(i);
        }
    }
    entity->fullname = inputFullnameData(input.substr(0, numbers.at(0)));
    entity->job = input.substr(numbers[0] + 1, (numbers[1] - 1) - numbers[0]);
    entity->email = input.substr(numbers[1] + 1, ((numbers[2] - 1) - numbers[1]));
    entity->passport = inputPassportClients(input.substr(numbers[2] + 1, (input.length() - 1) - numbers[2]));
    return entity;
}


vector <ClientsEntity*> readFromFileClients(string path) {
    setlocale(LC_ALL, "Russian");
    string str;
    int n = 0;
    ifstream file(path);
    getline(file, str);
    if (!str.empty()) {
        n = stoi(str);
    }
    vector<ClientsEntity*> data(n);

    for (int i = 0; i < n; i++) {
        getline(file, str);
        ClientsEntity* newEntity = new ClientsEntity();
        newEntity = inputEntityDataClients(str);
        data[i] = newEntity;
    }
    file.close();
    return data;
}

void writeData(vector<ClientsEntity*>  value, string path) {}
//void writeData(vector<ClientsEntity*>  value, string path) {
//    ofstream  fout(path);
//    fout << value.size() << "\n";
//    for (int i = 0; i < value.size(); i++) {
//        fout << value[i]->passport.series << value[i]->passport.number << "$" << value[i]->serviceType << "$" << value[i]->serviceName << "$" << value[i]->date.day << "." << value[i]->date.month << "." << value[i]->date.year << "\n";
//    }
//
//    fout.close();
//
//}