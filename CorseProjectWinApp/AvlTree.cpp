#include "AvlTree.h"



int _compareDate(date first, date second) {
    // 1 = 1 > 2     -1 = 1 < 2      0 = 1==2
    if (first.year < second.year) {
        return 1;
    }
    else if (first.year > second.year) {
        return -1;
    }
    else {
        if (first.month < second.month) {
            return 1;
        }
        else if (first.month > second.month) {
            return -1;
        }
        else {
            if (first.day < second.day) {
                return 1;
            }
            else if (first.day > second.day) {
                return -1;
            }
            else {
                return 0;
            }
        }
    }
}

int _compareKeys(listNodeElem* first, listNodeElem* second) {
    // 1 = 1 > 2     -1 = 1 < 2      0 = 1==2
    if (first->value > second->value) {
        return 1;
    }
    else if (first->value < second->value) {
        return -1;
    }
    else {
        return 0;
    }
}


listNode* initList()
{
    listNode* head;
    head = nullptr;
    return head;
};

listNode* addElemToEnd(listNode*& head, listNodeElem* value)
{
    listNode* newnode, * temp;
    newnode = new listNode;
    newnode->field = value;
    newnode->ptr = head;
    if (head != nullptr)
    {
        temp = head;
        while (temp->ptr != head)
        {
            temp = temp->ptr;
        }

        temp->ptr = newnode;
    }
    else
    {
        head = new listNode;
        head->field = value;
        head->ptr = head;
    }
    return (head);
}


void delListElem(listNode*& head, listNodeElem* value) {
    if (head == nullptr) {
        cout << "Execution error, the list is empty!" << endl;
        return;
    }

    listNode* current = head;
    listNode* previous = nullptr;

    do {
        if (current->field->index  == value->index) {
            if (previous == nullptr) {
                // Удаление головного элемента
                if (current->ptr == head) {
                    head = nullptr;
                }
                else {
                    listNode* lastNode = current;
                    while (lastNode->ptr != head) {
                        lastNode = lastNode->ptr;
                    }
                    head = current->ptr;
                    lastNode->ptr = head;
                }
                delete current;
                return;
            }
            else {
                // Удаление элемента из середины или конца списка
                previous->ptr = current->ptr;
                delete current;
                return;
            }
        }
        previous = current;
        current = current->ptr;
    } while (current != head);

    cout << "Element not found in the list!" << endl;
}

void listPrint(listNode* head)
{
    if (head == nullptr)
    {
        cout << "The list is empty";
        cout << "\n";
    }
    else
    {
        listNode* p;
        p = head;
        do
        {
            cout <<p->field->value << " ";
            p = p->ptr;
        } while (p != head);
    }
    cout << "\n";
}

listNode* deleteList(struct listNode*& head)
{
    if (head == nullptr)
    {
        cout << "List is empty , deletion error !";
        cout << "\n";
        return head;
    }
    else
    {
        listNode* runner, * temp;
        runner = head;
        while (runner->ptr != head)
        {
            temp = runner;
            runner = runner->ptr;
            delete temp;
        }
        delete (runner);
        head = nullptr;
        return (head);
    }
}

treeNode* initTree() {
    treeNode* root;
    root = nullptr;
    return root;
}

void addNode(treeNode*& pointer, listNodeElem* key, bool& heightChanged) {

    treeNode* pointer1, * pointer2;
    if (pointer == nullptr) {
        heightChanged = true;
        pointer = new treeNode;
        pointer->leftChild = nullptr;
        pointer->rightChild = nullptr;
        pointer->balanceFactor = 0;
        pointer->head = initList();
        addElemToEnd(pointer->head, key);

    }
    else if (_compareKeys(pointer->head->field, key) == 1) {
        addNode(pointer->leftChild, key, heightChanged);
        if (heightChanged) { // выросла левая часть 
            if (pointer->balanceFactor == 1) {
                pointer->balanceFactor = 0;
                heightChanged = false;
            }
            else if (pointer->balanceFactor == 0) {
                pointer->balanceFactor = -1;
            }
            else {
                pointer2 = new treeNode;
                pointer1 = new treeNode;
                pointer1 = pointer->leftChild;
                if (pointer1->balanceFactor == -1) { //одиночная LL-ротация
                    pointer->leftChild = pointer1->rightChild;
                    pointer1->rightChild = pointer;
                    pointer->balanceFactor = 0;
                    pointer = pointer1;
                }
                else { //двойная LR ротация
                    pointer2 = pointer1->rightChild;
                    pointer1->rightChild = pointer2->leftChild;
                    pointer2->leftChild = pointer1;
                    pointer->leftChild = pointer2->rightChild;
                    pointer2->rightChild = pointer;
                    if (pointer2->balanceFactor == -1) pointer->balanceFactor = 1; else pointer->balanceFactor = 0;
                    if (pointer2->balanceFactor == 1) pointer1->balanceFactor = -1; else pointer1->balanceFactor = 0;
                    pointer = pointer2;
                }
                pointer->balanceFactor = 0;
                heightChanged = false;
            }
        }
    }
    else if (_compareKeys(pointer->head->field, key) == -1) {
        addNode(pointer->rightChild, key, heightChanged);
        if (heightChanged) { //выросла правая часть 
            if (pointer->balanceFactor == -1) {
                pointer->balanceFactor = 0;
                heightChanged = false;
            }
            else if (pointer->balanceFactor == 0) {
                pointer->balanceFactor = 1;
            }
            else {
                pointer2 = new treeNode;
                pointer1 = new treeNode;
                pointer1 = pointer->rightChild;
                if (pointer1->balanceFactor == 1) { // одиночаня RR ротация 
                    pointer->rightChild = pointer1->leftChild;
                    pointer1->leftChild = pointer;
                    pointer->balanceFactor = 0;
                    pointer = pointer1;
                }
                else { // двойная RL ротация 
                    pointer2 = pointer1->leftChild;
                    pointer1->leftChild = pointer2->rightChild;
                    pointer2->rightChild = pointer1;
                    pointer->rightChild = pointer2->leftChild;
                    pointer2->leftChild = pointer;
                    if (pointer2->balanceFactor == 1) pointer->balanceFactor = -1; else pointer->balanceFactor = 0;
                    if (pointer2->balanceFactor == -1) pointer1->balanceFactor = 1; else pointer1->balanceFactor = 0;
                    pointer = pointer2;
                }
                pointer->balanceFactor = 0;
                heightChanged = false;
            }
        }

    }
    else {
        addElemToEnd(pointer->head, key);
        heightChanged = false;
    }



}

void _showTrunks(Trunk* p)
{
    if (p == nullptr) {
        return;
    }

    _showTrunks(p->prev);
    cout << p->str;
}

void _showTrunksDebug(Trunk* p, ofstream& fout) {
    if (p == nullptr) {
        return;
    }
    _showTrunksDebug(p->prev, fout);
    fout << p->str;
}

void printTree(treeNode* root, Trunk* prev)
{
    if (root != nullptr) {
        string prev_str = "    ";
        Trunk* trunk = new Trunk(prev, prev_str);

        if (root->rightChild != nullptr) { //TODOs
            printTree(root->rightChild, trunk);
        }

        listNode* temp = new listNode;
        temp = root->head->ptr;
        _showTrunks(trunk);
        cout << temp->field->value << endl;
        //cout << temp->field->passport.series << temp->field->passport.number << " " << temp->field->serviceType << " " << temp->field->serviceName << " " << temp->field->date.day << "." << temp->field->date.month << "." << temp->field->date.year << " " << endl;
        while (temp != root->head) {
            _showTrunks(trunk);
            cout << temp->field->value << endl;
            temp = temp->ptr;
        }
        //_showTrunks(trunk);
        //cout << " " << root->head->field.firstField << " " << root->head->field.secondField << " " << root->head->field.thirdField << endl;

        if (prev) {
            prev->str = prev_str;
        }

        if (root->leftChild != nullptr) {
            printTree(root->leftChild, trunk);
        }
    }
    else {
        cout << "Tree is empty" << endl;
    }
}

void _deleteTree(treeNode*& pointer)
{
    if (pointer->leftChild != nullptr) {
        _deleteTree(pointer->leftChild);
    }
    if (pointer->rightChild != nullptr) {
        _deleteTree(pointer->rightChild);
    }
    delete pointer;
    // после удления nullptr

}

treeNode* deleteTree(treeNode*& root) {
    _deleteTree(root);
    root = nullptr;
    return root;
}

void _del_balanceLeft(treeNode*& node, bool& heightChanged) {
    treeNode* pointer1, * pointer2;
    if (node->balanceFactor == -1) node->balanceFactor = 0;
    else if (node->balanceFactor == 0) {
        node->balanceFactor = 1;
        heightChanged = false;
    }
    else {
        pointer1 = new treeNode;
        pointer1 = node->rightChild;
        if (pointer1->balanceFactor >= 0) {
            node->rightChild = pointer1->leftChild;
            pointer1->leftChild = node;
            if (pointer1->balanceFactor == 0) {
                node->balanceFactor = 1;
                pointer1->balanceFactor = -1;
                heightChanged = false;
            }
            else {
                node->balanceFactor = 0;
                pointer1->balanceFactor = 0;
            }
            node = pointer1;
        }
        else {
            pointer2 = new treeNode;
            pointer2 = pointer1->leftChild;
            pointer1->leftChild = pointer2->rightChild;
            pointer2->rightChild = pointer1;
            node->rightChild = pointer2->leftChild;
            pointer2->leftChild = node;
            if (pointer2->balanceFactor == 1) {
                node->balanceFactor = -1;
            }
            else {
                node->balanceFactor = 0;
            }
            if (pointer2->balanceFactor == -1) {
                pointer1->balanceFactor = 1;
            }
            else {
                pointer1->balanceFactor = 0;
            }
            node = pointer2;
            pointer2->balanceFactor = 0;
        }
    }
}

void _del_balanceRight(treeNode*& node, bool& heightChanged) {
    treeNode* pointer1, * pointer2;
    if (node->balanceFactor == 1) node->balanceFactor = 0;
    else if (node->balanceFactor == 0) {
        node->balanceFactor = -1;
        heightChanged = false;
    }
    else {
        pointer1 = new treeNode;
        pointer1 = node->leftChild;
        if (pointer1->balanceFactor <= 0) {
            node->leftChild = pointer1->rightChild;
            pointer1->rightChild = node;
            if (pointer1->balanceFactor == 0) {
                node->balanceFactor = -1;
                pointer1->balanceFactor = 1;
                heightChanged = false;
            }
            else {
                node->balanceFactor = 0;
                pointer1->balanceFactor = 0;
            }
            node = pointer1;
        }
        else {
            pointer2 = new treeNode;
            pointer2 = pointer1->rightChild;
            pointer1->rightChild = pointer2->leftChild;
            pointer2->leftChild = pointer1;
            node->leftChild = pointer2->rightChild;
            pointer2->rightChild = node;
            if (pointer2->balanceFactor == -1) node->balanceFactor = 1; else node->balanceFactor = 0;
            if (pointer2->balanceFactor == 1) pointer1->balanceFactor = -1; else pointer1->balanceFactor = 0;
            node = pointer2;
            pointer2->balanceFactor = 0;
        }
    }
}

void _delWhenTwoChild(treeNode*& node, bool& heightChanged, treeNode*& delNode) {
    // минимальный справа 
    if (node->leftChild != nullptr) {
        _delWhenTwoChild(node->leftChild, heightChanged, delNode);
        if (heightChanged) {
            _del_balanceLeft(node, heightChanged);
        }
    }
    else {
        delNode->head->field = node->head->field;
        delNode = node;
        node = node->rightChild;
        heightChanged = true;

    }
}

void delNode(treeNode*& pointer, listNodeElem* key, bool& heightChanged, RequestsEntity* delElem) {
    treeNode* temp = new treeNode;
    if (pointer == nullptr);//нет в дереве
    else if (_compareKeys(pointer->head->field, key) == 1) {// > 
        delNode(pointer->leftChild, key, heightChanged, delElem);
        if (heightChanged) {
            _del_balanceLeft(pointer, heightChanged);
        }

    }
    else if (_compareKeys(pointer->head->field, key) == -1) {// <
        delNode(pointer->rightChild, key, heightChanged, delElem);
        if (heightChanged) {
            _del_balanceRight(pointer, heightChanged);
        }
    }
    else {
        temp = pointer;
        listNode* tempList = pointer->head;
        if (pointer->head->ptr != pointer->head) {
            while (tempList->ptr->field->index != pointer->head->field->index) {
                if (isEqualElements(delElem, DataStorage::data[tempList->field->index])) {
                    delListElem(pointer->head, tempList->field);
                    return;
                }
                tempList = tempList->ptr;
            }

            if (isEqualElements(delElem, DataStorage::data[tempList->field->index])) {
                delListElem(pointer->head, tempList->field);
                return;
            }
        }
        else {
            if (temp->rightChild == nullptr) {
                pointer = temp->leftChild;
                heightChanged = true;
                delete temp;
                temp = nullptr;
            }
            else if (temp->leftChild == nullptr) {

                pointer = temp->rightChild;
                heightChanged = true;
                delete temp;
                temp = nullptr;
            }
            else {
                _delWhenTwoChild(temp->rightChild, heightChanged, temp);
                if (heightChanged) _del_balanceRight(pointer, heightChanged);
            }
        }
        
    }
}

void _nodeCounter(treeNode* pointer, int& count) {
    if (pointer->leftChild != nullptr) {
        _nodeCounter(pointer->leftChild, count);
    }
    if (pointer->rightChild != nullptr) {
        _nodeCounter(pointer->rightChild, count);
    }
    count++;


}

int searchByPassportTreeNode(treeNode* pointer, RequestsEntity* givenValue,int& count) {
    listNodeElem* value = new listNodeElem();
    value->value = to_string(givenValue->passport.series) + to_string(givenValue->passport.number);
    if (pointer != NULL) {
        if (_compareKeys(pointer->head->field, value) == 1) {
            count++;
            if (pointer->leftChild != nullptr) {
                searchByPassportTreeNode(pointer->leftChild, givenValue, count);
            }
            else {
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = false;
                return 0;
            }
        }
        else if (_compareKeys(pointer->head->field, value) == -1) {
            count++;
            if (pointer->rightChild != nullptr) {
                searchByPassportTreeNode(pointer->rightChild, givenValue,count);
            }
            else {
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = false;
                return 0;
            }
        }
        else {
            if (isEqualElements(givenValue, DataStorage::data[pointer->head->field->index])) {
                count++;
                DataStorage::indexSearch = pointer->head->field->index;
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = true;
                return 0;
            }
            else {
                listNode* temp = pointer->head;
                while (temp->ptr->field->index != pointer->head->field->index) {
                    count++;
                    if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                        DataStorage::indexSearch = temp->field->index;
                        DataStorage::countComparisons = count;
                        DataStorage::resultSerch = true;
                        return 0;;
                    }
                    temp = temp->ptr;
                }
                count++;
                if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                    
                    DataStorage::indexSearch = temp->field->index;
                    DataStorage::countComparisons = count;
                    DataStorage::resultSerch = true;
                    return 0;
                }
                if (pointer->leftChild != nullptr) {
                    searchByPassportTreeNode(pointer->leftChild, givenValue,count);
                }
                if (pointer->rightChild != nullptr) {
                    searchByPassportTreeNode(pointer->rightChild, givenValue,count);
                }
            }
            
        }
    }
    else {
        DataStorage::countComparisons = count;
        DataStorage::resultSerch = false;
        return 0;
    }
}

int updateByPassportTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& index) {
    listNodeElem* value = new listNodeElem();
    value->value = to_string(givenValue->passport.series) + to_string(givenValue->passport.number);
    if (pointer != NULL) {
        if (_compareKeys(pointer->head->field, value) == 1) {
            if (pointer->leftChild != nullptr) {
                updateByPassportTreeNode(pointer->leftChild, givenValue, index);
            }
            else {
                return 0;
            }
        }
        else if (_compareKeys(pointer->head->field, value) == -1) {
            if (pointer->rightChild != nullptr) {
                updateByPassportTreeNode(pointer->rightChild, givenValue, index);
            }
            else {
                return 0;
            }
        }
        else {
            if (isEqualElements(givenValue, DataStorage::data[pointer->head->field->index])) {
                pointer->head->field->index = index;
                return 0;
            }
            else {
                listNode* temp = pointer->head;
                while (temp->ptr->field->index != pointer->head->field->index) {
                    if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                        temp->field->index = index;
                        return 0;
                    }
                    temp = temp->ptr;
                }
                if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                    temp->field->index = index;
                    return 0;
                }
                if (pointer->leftChild != nullptr) {
                    updateByPassportTreeNode(pointer->leftChild, givenValue, index);
                }
                if (pointer->rightChild != nullptr) {
                    updateByPassportTreeNode(pointer->rightChild, givenValue, index);
                }
            }

        }
    }
    else {
        return 0;
    }
}

int searchByDateTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& count) {
    listNodeElem* value = new listNodeElem();
    value->value = givenValue->date.day + '.' + givenValue->date.month + '.' + givenValue->date.year;
    if (pointer != NULL) {
        if (_compareKeys(pointer->head->field, value) == 1) {
            count++;
            if (pointer->leftChild != nullptr) {
                searchByDateTreeNode(pointer->leftChild, givenValue, count);
            }
            else {
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = false;
                return 0;
            }
        }
        else if (_compareKeys(pointer->head->field, value) == -1) {
            count++;
            if (pointer->rightChild != nullptr) {
                searchByDateTreeNode(pointer->rightChild, givenValue, count);
            }
            else {
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = false;
                return 0;
            }
        }
        else {
            if (isEqualElements(givenValue, DataStorage::data[pointer->head->field->index])) {
                count++;
                DataStorage::indexSearch = pointer->head->field->index;
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = true;
                return 0;
            }
            else {
                listNode* temp = pointer->head;
                while (temp->ptr->field->index != pointer->head->field->index) {
                    count++;
                    if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                        DataStorage::indexSearch = temp->field->index;
                        DataStorage::countComparisons = count;
                        DataStorage::resultSerch = true;
                        return 0;;
                    }
                    temp = temp->ptr;
                }
                count++;
                if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {

                    DataStorage::indexSearch = temp->field->index;
                    DataStorage::countComparisons = count;
                    DataStorage::resultSerch = true;
                    return 0;
                }
                if (pointer->leftChild != nullptr) {
                    searchByDateTreeNode(pointer->leftChild, givenValue, count);
                }
                if (pointer->rightChild != nullptr) {
                    searchByDateTreeNode(pointer->rightChild, givenValue, count);
                }
            }

        }
    }
    else {
        DataStorage::countComparisons = count;
        DataStorage::resultSerch = false;
        return 0;
    }
}

int updateByDateTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& index) {
    listNodeElem* value = new listNodeElem();
    value->value = givenValue->date.day + '.' + givenValue->date.month + '.' + givenValue->date.year;
    if (pointer != NULL) {
        if (_compareKeys(pointer->head->field, value) == 1) {
            if (pointer->leftChild != nullptr) {
                updateByDateTreeNode(pointer->leftChild, givenValue, index);
            }
            else {
                return 0;
            }
        }
        else if (_compareKeys(pointer->head->field, value) == -1) {
            if (pointer->rightChild != nullptr) {
                updateByDateTreeNode(pointer->rightChild, givenValue, index);
            }
            else {
                return 0;
            }
        }
        else {
            if (isEqualElements(givenValue, DataStorage::data[pointer->head->field->index])) {
                pointer->head->field->index = index;
                return 0;
            }
            else {
                listNode* temp = pointer->head;
                while (temp->ptr->field->index != pointer->head->field->index) {
                    if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                        temp->field->index = index;
                        return 0;
                    }
                    temp = temp->ptr;
                }
                if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                    temp->field->index = index;
                    return 0;
                }
                if (pointer->leftChild != nullptr) {
                    updateByDateTreeNode(pointer->leftChild, givenValue, index);
                }
                if (pointer->rightChild != nullptr) {
                    updateByDateTreeNode(pointer->rightChild, givenValue, index);
                }
            }

        }
    }
    else {
        return 0;
    }
}

int searchByServiceNameTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& count) {
    listNodeElem* value = new listNodeElem();
    value->value = givenValue->serviceName;
    if (pointer != NULL) {
        if (_compareKeys(pointer->head->field, value) == 1) {
            count++;
            if (pointer->leftChild != nullptr) {
                searchByServiceNameTreeNode(pointer->leftChild, givenValue, count);
            }
            else {
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = false;
                return 0;
            }
        }
        else if (_compareKeys(pointer->head->field, value) == -1) {
            count++;
            if (pointer->rightChild != nullptr) {
                searchByServiceNameTreeNode(pointer->rightChild, givenValue, count);
            }
            else {
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = false;
                return 0;
            }
        }
        else {
            if (isEqualElements(givenValue, DataStorage::data[pointer->head->field->index])) {
                count++;
                DataStorage::indexSearch = pointer->head->field->index;
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = true;
                return 0;
            }
            else {
                listNode* temp = pointer->head;
                while (temp->ptr->field->index != pointer->head->field->index) {
                    count++;
                    if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                        DataStorage::indexSearch = temp->field->index;
                        DataStorage::countComparisons = count;
                        DataStorage::resultSerch = true;
                        return 0;;
                    }
                    temp = temp->ptr;
                }
                count++;
                if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {

                    DataStorage::indexSearch = temp->field->index;
                    DataStorage::countComparisons = count;
                    DataStorage::resultSerch = true;
                    return 0;
                }
                if (pointer->leftChild != nullptr) {
                    searchByServiceNameTreeNode(pointer->leftChild, givenValue, count);
                }
                if (pointer->rightChild != nullptr) {
                    searchByServiceNameTreeNode(pointer->rightChild, givenValue, count);
                }
            }

        }
    }
    else {
        DataStorage::countComparisons = count;
        DataStorage::resultSerch = false;
        return 0;
    }
}

int updateServiceNameTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& index) {
    listNodeElem* value = new listNodeElem();
    value->value = givenValue->serviceName;
    if (pointer != NULL) {
        if (_compareKeys(pointer->head->field, value) == 1) {
            if (pointer->leftChild != nullptr) {
                updateServiceNameTreeNode(pointer->leftChild, givenValue, index);
            }
            else {
                return 0;
            }
        }
        else if (_compareKeys(pointer->head->field, value) == -1) {
            if (pointer->rightChild != nullptr) {
                updateServiceNameTreeNode(pointer->rightChild, givenValue, index);
            }
            else {
                return 0;
            }
        }
        else {
            if (isEqualElements(givenValue, DataStorage::data[pointer->head->field->index])) {
                pointer->head->field->index = index;
                return 0;
            }
            else {
                listNode* temp = pointer->head;
                while (temp->ptr->field->index != pointer->head->field->index) {
                    if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                        temp->field->index = index;
                        return 0;
                    }
                    temp = temp->ptr;
                }
                if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                    temp->field->index = index;
                    return 0;
                }
                if (pointer->leftChild != nullptr) {
                    updateServiceNameTreeNode(pointer->leftChild, givenValue, index);
                }
                if (pointer->rightChild != nullptr) {
                    updateServiceNameTreeNode(pointer->rightChild, givenValue, index);
                }
            }

        }
    }
    else {
        return 0;
    }
}

int searchByServiceTypeTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& count) {
    listNodeElem* value = new listNodeElem();
    value->value = givenValue->serviceType;
    if (pointer != NULL) {
        if (_compareKeys(pointer->head->field, value) == 1) {
            count++;
            if (pointer->leftChild != nullptr) {
                searchByServiceTypeTreeNode(pointer->leftChild, givenValue, count);
            }
            else {
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = false;
                return 0;
            }
        }
        else if (_compareKeys(pointer->head->field, value) == -1) {
            count++;
            if (pointer->rightChild != nullptr) {
                searchByServiceTypeTreeNode(pointer->rightChild, givenValue, count);
            }
            else {
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = false;
                return 0;
            }
        }
        else {
            if (isEqualElements(givenValue, DataStorage::data[pointer->head->field->index])) {
                count++;
                DataStorage::indexSearch = pointer->head->field->index;
                DataStorage::countComparisons = count;
                DataStorage::resultSerch = true;
                return 0;
            }
            else {
                listNode* temp = pointer->head;
                while (temp->ptr->field->index != pointer->head->field->index) {
                    count++;
                    if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                        DataStorage::indexSearch = temp->field->index;
                        DataStorage::countComparisons = count;
                        DataStorage::resultSerch = true;
                        return 0;
                    }
                    temp = temp->ptr;
                }
                count++;
                if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                    DataStorage::indexSearch = temp->field->index;
                    DataStorage::countComparisons = count;
                    DataStorage::resultSerch = true;
                    return 0;
                }
                if (pointer->leftChild != nullptr) {
                    searchByServiceTypeTreeNode(pointer->leftChild, givenValue, count);
                }
                if (pointer->rightChild != nullptr) {
                    searchByServiceTypeTreeNode(pointer->rightChild, givenValue, count);
                }
            }

        }
    }
    else {
        DataStorage::countComparisons = count;
        DataStorage::resultSerch = false;
        return 0;
    }
}

int updateServiceTypeTreeNode(treeNode* pointer, RequestsEntity* givenValue, int& index) {
    listNodeElem* value = new listNodeElem();
    value->value = givenValue->serviceType;
    if (pointer != NULL) {
        if (_compareKeys(pointer->head->field, value) == 1) {
            if (pointer->leftChild != nullptr) {
                updateServiceTypeTreeNode(pointer->leftChild, givenValue, index);
            }
            else {
                return 0;
            }
        }
        else if (_compareKeys(pointer->head->field, value) == -1) {
            if (pointer->rightChild != nullptr) {
                updateServiceTypeTreeNode(pointer->rightChild, givenValue, index);
            }
            else {
                return 0;
            }
        }
        else {
            if (isEqualElements(givenValue, DataStorage::data[pointer->head->field->index])) {
                pointer->head->field->index = index;
                return 0;
            }
            else {
                listNode* temp = pointer->head;
                while (temp->ptr->field->index != pointer->head->field->index) {
                    if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                        temp->field->index = index;
                        return 0;
                    }
                    temp = temp->ptr;
                }
                if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
                    temp->field->index = index;
                    return 0;
                }
                if (pointer->leftChild != nullptr) {
                    updateServiceTypeTreeNode(pointer->leftChild, givenValue, index);
                }
                if (pointer->rightChild != nullptr) {
                    updateServiceTypeTreeNode(pointer->rightChild, givenValue, index);
                }
            }

        }
    }
    else {
        return 0;
    }
}

void debugPrintAvlTree(treeNode* root, Trunk* prev,ofstream& fout) {
    if (root != nullptr) {
        string prev_str = "    ";
        Trunk* trunk = new Trunk(prev, prev_str);

        if (root->rightChild != nullptr) { //TODOs
            debugPrintAvlTree(root->rightChild, trunk,fout);
        }

        listNode* temp = new listNode;
        temp = root->head;
        _showTrunksDebug(trunk,fout);
        fout << temp->field->value << " index: " << temp->field->index << endl;
        temp = root->head->ptr;
        //cout << temp->field->passport.series << temp->field->passport.number << " " << temp->field->serviceType << " " << temp->field->serviceName << " " << temp->field->date.day << "." << temp->field->date.month << "." << temp->field->date.year << " " << endl;
        while (temp != root->head) {
            _showTrunksDebug(trunk,fout);
            fout << temp->field->value << " index: " << temp->field->index << endl;
            temp = temp->ptr;
        }
        //_showTrunks(trunk);
        //cout << " " << root->head->field.firstField << " " << root->head->field.secondField << " " << root->head->field.thirdField << endl;

        if (prev) {
            prev->str = prev_str;
        }

        if (root->leftChild != nullptr) {
            debugPrintAvlTree(root->leftChild, trunk,fout);
        }
    }
    else {
        fout << "Tree is empty" << endl;
    }
}


//int main()
//{
  //  bool heightChanged = false;
 //   treeNode* root = initTree();
 //   vector<RequestsEntity*> data = readFromFile("stdrequests.txt");
  //  for (int i = 0; i < data.size(); i++) {
  //      addNode(root, data[i], heightChanged);
 //   }
 //   addNode(root, data[1], heightChanged);
 //   addNode(root, data[2], heightChanged);
 //   printTree(root, nullptr);
 //  cout << endl;
 //   cout << endl;
  //  cout << endl;
  //  //  delNode(root, data[2], heightChanged);
  //  printTree(root, nullptr);
//}
