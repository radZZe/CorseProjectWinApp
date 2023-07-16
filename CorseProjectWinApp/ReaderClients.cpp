#pragma once
#include "ReaderClients.h"
#include <regex>
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
#include <set>

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
    int number = stoi(input.substr(4 , (input.length()) - 2));
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
            if (input[i] != ' ')surname += input[i];
        }
        if (countShifts == 1)
        {
            if (input[i] != ' ')name += input[i];
        }
        if (countShifts == 2)
        {
            if (input[i] != ' ')lastname += input[i];
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
    entity->passport = inputPassportClients(input.substr(numbers[2] + 1, (input.length()-1) - numbers[2]));
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

bool isValidateData(string passSerstr, string passNumstr, string fullnamestr, string email, string job)
{
    try {

        if (passNumstr.size() == 0 || passSerstr.size() == 0 || fullnamestr.size() == 0 || email.size() == 0 || job.size() == 0)
        {
            return false;
        }
        set<char>letters = { 'q','w','e','r','t','y','u','i','o','p','a','s',
        'd','f','g','h','j','k','l','z','x','c','v','b','n','m','Q','W','E',
        'R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z'
        ,'X','C','V','B','N','M','0','1','2','3','4','5','6','7','8','9','-',
        '_','!','#','$','%','^','&','*','(',')','+','=','[',']','{','}','<',
        '>','?','/','|','~','\\','.',' ','@'};
        set<char>digits = { '0','1','2','3','4','5','6','7','8','9' };
        bool isValidPassport = true;
        for (size_t i = 0; i < passSerstr.size(); i++)
        {
            if (int(passSerstr[i]) <= 47 || int(passSerstr[i]) >= 59)//48-58 это ASCII-коды цифр
            {
                isValidPassport = false;
                break;
            }
        }
        for (size_t i = 0; i < passNumstr.size(); i++)
        {
            if (int(passNumstr[i]) <= 47 || int(passNumstr[i]) >= 59)//48-58 это ASCII-коды цифр
            {
                isValidPassport = false;
                break;
            }
        }
        bool flag = isValidPassport;
        for (int i = 0; i < email.size(); i++)
        {
            if (letters.find(email[i]) == letters.end()) {
                flag = flag && false;
            }
        }
        if (!flag)return false;
        bool sobaka = false;
        for (int i = 0; i < email.size(); i++)
        {
            if (email[i] == '@') sobaka = true;
        }
        flag = flag && sobaka;
        return flag;
    }
    catch (exception& err)
    {
        return false;
    }
    return false;
}

void writeDataClient(vector<ClientsEntity*>  value, string path) {
    ofstream  fout(path);
    fout << value.size() << "\n";
    for (int i = 0; i < value.size(); i++) {
        fout << value[i]->fullname.surname +" "+value[i]->fullname.name +" "+ value[i]->fullname.lastname 
            << "$" << value[i]->job<< "$" << value[i]->email << "$" << value[i]->passport.series << "" << value[i]->passport.number <<"\n";
    }

    fout.close();

}