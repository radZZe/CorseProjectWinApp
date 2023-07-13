#include "ReaderServices.h"
using namespace std;



int isEqualElements(ServiceEntity* first, ServiceEntity* second) {

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

ServiceEntity* inputServicesEntityData(string inputString) {
    ServiceEntity* entity;
    entity = new ServiceEntity();
    vector <int> numbers;
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '$') {
            numbers.push_back(i);
        }
    }
    entity->serviceType = inputString.substr(0, numbers.at(0));
    entity->division = inputString.substr(numbers[0] + 1, (numbers[1] - 1) - numbers[0]);
    entity->serviceName = inputString.substr(numbers[1] + 1, ((numbers[2] - 1) - numbers[1]));
    entity->term = stoi(inputString.substr(numbers[2] + 1, (inputString.length() - 1) - numbers[2]));
    return entity;
}


vector <ServiceEntity*> readServicesFromFile(string path) {
    setlocale(LC_ALL, "Russian");
    string str;
    int n = 0;
    ifstream file(path);
    getline(file, str);
    if (!str.empty()) {
        n = stoi(str);
    }
    vector<ServiceEntity*> data(n);

    for (int i = 0; i < n; i++) {
        getline(file, str);
        ServiceEntity* newEntity = new ServiceEntity();
        newEntity = inputServicesEntityData(str);
        data[i] = newEntity;
    }
    file.close();
    return data;
}


void writeData(vector<ServiceEntity*>  value, string dir) {
    ofstream  fout(dir);
    fout << value.size() << "\n";
    for (int i = 0; i < value.size(); i++) {
        fout << value[i]->serviceType << value[i]->division << "$" << value[i]->serviceName << "$" << value[i]->serviceName << "$" << value[i]->term << "\n";
    }

    fout.close();

}