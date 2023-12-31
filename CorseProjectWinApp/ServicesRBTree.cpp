#include "ServicesRBTree.h"
using namespace std;


listServices* initListServices()
{
    listServices* head;
    head = nullptr;
    return head;
}

treeNodeServices* initLeaf()
{
    treeNodeServices* leaf = new treeNodeServices;
    leaf->left = nullptr;
    leaf->right = nullptr;
    leaf->color = 'b';
    return leaf;
}

bool isLastElement(listServices*& head)
{
    if (head == nullptr)
    {
        return false;
    }
    else
    {
        if (head == head->next)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

listServices* deleteListElement(listServices* head, ServiceEntity* givenData)
{
    listServices* runner;

    bool flag = true;
    runner = head;
    if (head == nullptr)
    {
        return head;
    }
    else
    {
        while (runner->next != head && flag == true)
        {
            if (isEqualServices(DataStorage::dataServices[runner->next->data.index], givenData)) {
                listServices* save = new listServices;
                save->next = runner->next->next;
                delete runner->next;
                runner->next = save->next;
                runner->next->previous = runner;
                runner = runner->next;
                flag = false;
            }
            else {
                runner = runner->next;
            }
        }
        if (isEqualServices(DataStorage::dataServices[runner->next->data.index], givenData)) {
            listServices* save = new listServices;
            save->next = runner->next->next;
            delete runner->next;
            runner->next = save->next;
            runner->next->previous = runner;
            runner = runner->next;
            flag = false;
        }
        return head;
    }
}

void printList(listServices* head)
{
    listServices* p;
    p = head;
    if (head != nullptr)
    {
        do
        {

            cout << "Data: " << (p->data.value) << " ";
            p = p->next;
        } while (p != head);
    }
    else
    {
        cout << "Empty"
            << "\n";
    }
}

void debugPrintList(listServices* head, ofstream& fout)
{
    listServices* p;
    p = head;
    if (head != nullptr)
    {
        do
        {

            fout << (p->data.value) << " - index " << (p->data.index)  << " ->  ";
            p = p->next;
        } while (p != head);
        fout << '\n';
    }
    else
    {
        fout << "\n";
    }
}

int compareData(treeNodeElemServices key1, treeNodeElemServices key2)
{
    if (key1.value > key2.value) {
        return 1;
    }
    else if (key1.value < key2.value) {
        return -1;
    }
    else return 0;
}

int compareTerm(treeNodeElemServices one, treeNodeElemServices two) {
    if (one.value.length() > two.value.length()) {
        return 1;
    }
    else if (one.value.length() < two.value.length()) {
        return -1;
    }
    else {
        if (one.value > two.value) {
            return 1;
        }
        else if (one.value < two.value) {
            return -1;
        }
        else return 0;
    }



    //int val1 = sto/*i(one.value);
    //int val2 = stoi(t/*wo.value);
    //if (val1 > val2) {
    //    return 1;
    //}
    //else if (val1 < val2) {
    //    return -1;
    //}
    //else return 0;*/*/
}

listServices* addInOrder(listServices*& head, treeNodeElemServices element)
{
    listServices* newNode, * runner;
    newNode = new listServices;
    newNode->data = element;
    newNode->next = newNode;
    newNode->previous = newNode;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        runner = head;
        newNode->next = runner;
        newNode->previous = runner->previous;
        runner->previous->next = newNode;
        runner->previous = newNode;
        //head = newNode;
    }
    int jopa = 0;
    return head;
}

listServices* deleteList(struct listServices*& head)
{
    listServices* runner, * temp;
    runner = head;
    if (head == nullptr)
    {
        return nullptr;
    }
    while (runner->next != head)
    {
        temp = runner;
        runner = runner->next;
        delete temp;
    }
    delete (runner);
    head = nullptr;
    return (head);
}

bool searchServiceInList(listServices* head, ServiceEntity* element, int &count) {
    bool flag = false;
    listServices* runner;
    runner = head;
    if (head == nullptr) {
       return false;
    }
    else {
        while (runner->next != head && flag == false) {
            count++;
            if (isEqualServices(DataStorage::dataServices[runner->data.index], element)) {
                flag = true;
                DataStorage::resultSerch = true;
                DataStorage::indexSearch = runner->data.index;
                return flag;
            }
            else {
                runner = runner->next;
            }
        }
        if (isEqualServices(DataStorage::dataServices[runner->data.index], element)) {
            flag = true;
            DataStorage::resultSerch = true;
            DataStorage::indexSearch = runner->data.index;
        }
    }
    return flag;
}

listServices* deleteRepeatedElement(listServices*& head)
{
    if (head->next == head)
    {
        deleteList(head);
        head = nullptr;
    }
    else
    {
        listServices* save = new listServices();
        save->next = head->next->next;
        delete head->next;
        head->next = save->next;
        head->next->next->previous = head;
        head = head->next;
    }
    return head;
}


treeNodeServices* initTree(treeNodeServices* leaf)
{
    treeNodeServices* root;
    root = leaf;
    DataStorage::rbTreeDivision = root;
    return root;
}

treeNodeServices* findMaxLeft(treeNodeServices* rootLeft, treeNodeServices* leaf)
{
    while (rootLeft->right != leaf)
    {
        rootLeft = rootLeft->right;
    }
    return rootLeft;
}

void printTreeA(treeNodeServices*& root, int h, treeNodeServices*& leaf)
{
    if (root == nullptr)
    {
        cout << "The tree doesn't exist";
    }
    else
    {
        if (root != leaf && root != nullptr)
        {
            printTreeA(root->right, h + 4, leaf);
            for (int i = 1; i <= h; i++)
            {
                cout << "  ";
            }
            printList(root->key);
            //cout << "| Data: " << root->key->data.value << " Array index: " << root->key->data.index << " Color: " << root->color << " |" << '\n';
            printTreeA(root->left, h + 4, leaf);
        }
    }
}

void debugPrintTreeA(treeNodeServices*& root, int h, treeNodeServices*& leaf, ofstream& fout)
{
    if (root == nullptr)
    {
        fout << "The tree doesn't exist";
    }
    else
    {
        if (root != leaf && root != nullptr)
        {
            debugPrintTreeA(root->right, h + 4, leaf, fout);
            for (int i = 1; i <= h; i++)
            {
                fout << "  ";
            }
            fout << root->color << " Data: ";
            debugPrintList(root->key, fout);
            //fout << "| Data: " << root->key->data.value << " Array index: " << root->key->data.index << " Color: " << root->color << " |" << '\n';
            debugPrintTreeA(root->left, h + 4, leaf, fout);
        }
    }
}

bool search(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int &count, ServiceEntity* fullEntity)
{
    treeNodeServices* temp = root;
    if (root == nullptr)
    {
        DataStorage::resultSerch = false;
        cout << "The tree does not exist";
        return false;
    }
    else
    {
        while (temp != leaf)
        {
            count++;
            DataStorage::countComparisons = count;
            if (compareData(temp->key->data, element) == 0)
            {
                return searchServiceInList(temp->key, fullEntity, count);

            }
            else if (compareData(temp->key->data, element) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        DataStorage::resultSerch = false;
        return false;
    }
}

bool searchTerm(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int& count, ServiceEntity* fullEntity)
{
    treeNodeServices* temp = root;
    if (root == nullptr)
    {
        DataStorage::resultSerch = false;
        cout << "The tree does not exist";
        return false;
    }
    else
    {
        while (temp != leaf)
        {
            count++;
            DataStorage::countComparisons = count;
            if (compareTerm(temp->key->data, element) == 0)
            {
                return searchServiceInList(temp->key, fullEntity, count);

            }
            else if (compareTerm(temp->key->data, element) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        DataStorage::resultSerch = false;
        return false;
    }
}

bool _searchServiceInList(listServices* head, treeNodeElemServices element, int& count) {
    bool flag = false;
    listServices* runner;
    runner = head;
    if (head == nullptr) {
        return false;
    }
    else {
        while (runner->next != head && flag == false) {
            count++;
            /*if (isEqualServices(DataStorage::dataServices[runner->data.index], DataStorage::dataServices[element.index])) {*/
            if (runner->data.value == element.value) {
                flag = true;
                return flag;
            }
            else {
                runner = runner->next;
            }
        }
        //if (isEqualServices(DataStorage::dataServices[head->previous->data.index], DataStorage::dataServices[element.index])) {
        if (head->previous->data.value == element.value) {
            flag = true;
        }
    }
    return flag;
}

bool _search(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int& count)
{
    treeNodeServices* temp = root;
    if (root == nullptr)
    {
        DataStorage::resultSerch = false;
        cout << "The tree does not exist";
        return false;
    }
    else
    {
        while (temp != leaf)
        {
            count++;
            DataStorage::countComparisons = count;
            if (compareData(temp->key->data, element) == 0)
            {
                return _searchServiceInList(temp->key, element, count);

            }
            else if (compareData(temp->key->data, element) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        DataStorage::resultSerch = false;
        return false;
    }
}

bool _searchTerm(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf, int& count)
{
    treeNodeServices* temp = root;
    if (root == nullptr)
    {
        DataStorage::resultSerch = false;
        cout << "The tree does not exist";
        return false;
    }
    else
    {
        while (temp != leaf)
        {
            count++;
            DataStorage::countComparisons = count;
            if (compareTerm(temp->key->data, element) == 0)
            {
                return _searchServiceInList(temp->key, element, count);

            }
            else if (compareTerm(temp->key->data, element) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        DataStorage::resultSerch = false;
        return false;
    }
}

void leftRotate(treeNodeServices*& root, treeNodeServices* x, treeNodeServices*& leaf)
{
    treeNodeServices* y = x->right;
    x->right = y->left;

    if (y->left != leaf)
    {
        y->left->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == leaf)
    {
        root = y;
    }
    else if (x == x->parent->left)
    {
        x->parent->left = y;
    }
    else
    {
        x->parent->right = y;
    }
    y->left = x;
    x->parent = y;
}

void rightRotate(treeNodeServices*& root, treeNodeServices* x, treeNodeServices*& leaf)
{
    treeNodeServices* y = x->left;
    x->left = y->right;

    if (y->right != leaf)
    {
        y->right->parent = x;
    }
    y->parent = x->parent;
    if (x->parent == leaf)
    {
        root = y;
    }
    else if (x == x->parent->right)
    {
        x->parent->right = y;
    }
    else
    {
        x->parent->left = y;
    }
    y->right = x;
    x->parent = y;
}

void insertFixup(treeNodeServices*& root, treeNodeServices*& z, treeNodeServices*& leaf)
{
    treeNodeServices* y;
    while (z->parent->color == 'r')
    {
        if (z->parent == z->parent->parent->left)
        {
            y = z->parent->parent->right;
            if (y->color == 'r')
            {
                z->parent->color = 'b';
                y->color = 'b';
                z->parent->parent->color = 'r';
                z = z->parent->parent;
            }
            else if (z == z->parent->right)
            {
                z = z->parent;
                leftRotate(root, z, leaf);
            }
            else
            {
                z->parent->color = 'b';
                z->parent->parent->color = 'r';
                rightRotate(root, z->parent->parent, leaf);
            }
        }
        else
        {
            y = z->parent->parent->left;
            if (y->color == 'r')
            {
                z->parent->color = 'b';
                y->color = 'b';
                z->parent->parent->color = 'r';
                z = z->parent->parent;
            }
            else if (z == z->parent->left)
            {
                z = z->parent;
                rightRotate(root, z, leaf);
            }
            else
            {
                z->parent->color = 'b';
                z->parent->parent->color = 'r';
                leftRotate(root, z->parent->parent, leaf);
            }
        }
    }
    root->color = 'b';
}

treeNodeServices* insert(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf)
{
    if (root == nullptr)
    {
        return root;
    }
    else
    {
        int count = DataStorage::countComparisons;
        if (_search(root, element, leaf, count))
        {
            treeNodeServices* temp = root;
            while (temp != leaf)
            {
                if (compareData(temp->key->data, element) == 0)
                {
                    addInOrder(temp->key, element);
                    break;
                }
                if (compareData(element, temp->key->data) == 1)
                {
                    temp = temp->right;
                }
                else
                {
                    temp = temp->left;
                }
            }
        }
        else
        {
            treeNodeServices* newNode = new treeNodeServices;
            newNode->color = 'r';
            newNode->key = initListServices();
            addInOrder(newNode->key, element);
            newNode->parent = leaf;
            newNode->right = leaf;
            newNode->left = leaf;

            treeNodeServices* y = leaf;
            treeNodeServices* x = root;

            while (x != leaf)
            {
                y = x;
                if (compareData(newNode->key->data, x->key->data) == -1)
                {
                    x = x->left;
                }
                else
                {
                    x = x->right;
                }
            }
            newNode->parent = y;
            if (y == leaf)
            {
                root = newNode;
            }
            else if (compareData(newNode->key->data, y->key->data) == -1)
            {
                y->left = newNode;
            }
            else
            {
                y->right = newNode;
            }
            if (newNode->parent == leaf)
            {
                newNode->color = 'b';
                return root;
            }
            if (newNode->parent->parent == leaf)
            {
                return root;
            }
            insertFixup(root, newNode, leaf);
        }
        return root;
    }
}

treeNodeServices* insertTerm(treeNodeServices*& root, treeNodeElemServices element, treeNodeServices*& leaf)
{
    if (root == nullptr)
    {
        return root;
    }
    else
    {
        int count = DataStorage::countComparisons;
        if (_searchTerm(root, element, leaf, count))
        {
            treeNodeServices* temp = root;
            while (temp != leaf)
            {
                if (compareTerm(temp->key->data, element) == 0)
                {
                    addInOrder(temp->key, element);
                    break;
                }
                if (compareTerm(element, temp->key->data) == 1)
                {
                    temp = temp->right;
                }
                else
                {
                    temp = temp->left;
                }
            }
        }
        else
        {
            treeNodeServices* newNode = new treeNodeServices;
            newNode->color = 'r';
            newNode->key = initListServices();
            addInOrder(newNode->key, element);
            newNode->parent = leaf;
            newNode->right = leaf;
            newNode->left = leaf;

            treeNodeServices* y = leaf;
            treeNodeServices* x = root;

            while (x != leaf)
            {
                y = x;
                if (compareTerm(newNode->key->data, x->key->data) == -1)
                {
                    x = x->left;
                }
                else
                {
                    x = x->right;
                }
            }
            newNode->parent = y;
            if (y == leaf)
            {
                root = newNode;
            }
            else if (compareTerm(newNode->key->data, y->key->data) == -1)
            {
                y->left = newNode;
            }
            else
            {
                y->right = newNode;
            }
            if (newNode->parent == leaf)
            {
                newNode->color = 'b';
                return root;
            }
            if (newNode->parent->parent == leaf)
            {
                return root;
            }
            insertFixup(root, newNode, leaf);
        }
        return root;
    }
}

void transplant(treeNodeServices*& root, treeNodeServices*& u, treeNodeServices*& v, treeNodeServices*& leaf)
{
    if (u->parent == leaf)
    {
        root = v;
    }
    else if (u == u->parent->left)
    {
        u->parent->left = v;
    }
    else
    {
        u->parent->right = v;
    }
    v->parent = u->parent;
}

void deleteFixup(treeNodeServices*& root, treeNodeServices*& x, treeNodeServices*& leaf)
{
    treeNodeServices* w;
    while (x != root && x->color == 'b')
    {
        if (x == x->parent->left)
        {
            w = x->parent->right;
            if (w->color == 'r')
            {
                w->color = 'b';
                x->parent->color = 'r';
                leftRotate(root, x->parent, leaf);
                w = x->parent->right;
            }
            if (w->left->color == 'b' && w->right->color == 'b')
            {
                w->color = 'r';
                x = x->parent;
            }
            else if (w->right->color == 'b')
            {
                w->left->color = 'b';
                w->color = 'r';
                rightRotate(root, w, leaf);
                w = x->parent->right;
            }
            else
            {
                w->color = x->parent->color;
                x->parent->color = 'b';
                w->right->color = 'b';
                leftRotate(root, x->parent, leaf);
                x = root;
            }
        }
        else
        {
            w = x->parent->left;
            if (w->color == 'r')
            {
                w->color = 'b';
                x->parent->color = 'r';
                rightRotate(root, x->parent, leaf);
                w = x->parent->left;
            }
            if (w->right->color == 'b' && w->left->color == 'b')
            {
                w->color = 'r';
                x = x->parent;
            }
            else if (w->left->color == 'b')
            {
                w->right->color = 'b';
                w->color = 'r';
                leftRotate(root, w, leaf);
                w = x->parent->left;
            }
            else
            {
                w->color = x->parent->color;
                x->parent->color = 'b';
                w->left->color = 'b';
                rightRotate(root, x->parent, leaf);
                x = root;
            }
        }
    }
    x->color = 'b';
}

void deleteElement(treeNodeServices*& root, treeNodeElemServices value, treeNodeServices*& leaf, ServiceEntity* fullEntity)
{
    treeNodeServices* temp = root;
    treeNodeServices* z = leaf;
    int count = DataStorage::countComparisons;

    if (root == nullptr)
    {
        cout << "The tree does not exist";
    }
    else if (search(root, value, leaf, count, fullEntity) == false)
    {
        cout << "The node with given data does not exist";
    }
    else
    {
        while (temp != leaf)
        {
            if (compareData(temp->key->data, value) == 0)
            {
                z = temp;
            }
            if (compareData(temp->key->data, value) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        if (isLastElement(z->key))
        {
            treeNodeServices* y = z;
            treeNodeServices* x;

            char colorOG = y->color;
            if (z->left == leaf)
            {
                x = z->right;
                transplant(root, z, z->right, leaf);
            }
            else if (z->right == leaf)
            {
                x = z->left;
                transplant(root, z, z->left, leaf);
            }
            else
            {
                y = findMaxLeft(z->left, leaf);
                colorOG = y->color;
                x = y->left;
                if (y->parent == z)
                {
                    x->parent = y;
                }
                else
                {
                    transplant(root, y, y->left, leaf);
                    y->left = z->left;
                    y->left->parent = y;
                }
                transplant(root, z, y, leaf);
                y->right = z->right;
                y->right->parent = y;
                y->color = z->color;
            }
            if (colorOG == 'b')
            {
                deleteFixup(root, x, leaf);
            }
        }
        else
        {
            deleteListElement(z->key, fullEntity);
        }
    }
}

void deleteTerm(treeNodeServices*& root, treeNodeElemServices value, treeNodeServices*& leaf, ServiceEntity* fullEntity)
{
    treeNodeServices* temp = root;
    treeNodeServices* z = leaf;
    int count = DataStorage::countComparisons;

    if (root == nullptr)
    {
        cout << "The tree does not exist";
    }
    else if (searchTerm(root, value, leaf, count, fullEntity) == false)
    {
        cout << "The node with given data does not exist";
    }
    else
    {
        while (temp != leaf)
        {
            if (compareTerm(temp->key->data, value) == 0)
            {
                z = temp;
            }
            if (compareTerm(temp->key->data, value) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        if (isLastElement(z->key))
        {
            treeNodeServices* y = z;
            treeNodeServices* x;

            char colorOG = y->color;
            if (z->left == leaf)
            {
                x = z->right;
                transplant(root, z, z->right, leaf);
            }
            else if (z->right == leaf)
            {
                x = z->left;
                transplant(root, z, z->left, leaf);
            }
            else
            {
                y = findMaxLeft(z->left, leaf);
                colorOG = y->color;
                x = y->left;
                if (y->parent == z)
                {
                    x->parent = y;
                }
                else
                {
                    transplant(root, y, y->left, leaf);
                    y->left = z->left;
                    y->left->parent = y;
                }
                transplant(root, z, y, leaf);
                y->right = z->right;
                y->right->parent = y;
                y->color = z->color;
            }
            if (colorOG == 'b')
            {
                deleteFixup(root, x, leaf);
            }
        }
        else
        {
            deleteListElement(z->key, fullEntity);
        }
    }
}

void deleteTree(treeNodeServices*& root, treeNodeServices* leaf, ServiceEntity* fullEntity)
{
    if (root == nullptr)
    {
        return;
    }
    deleteElement(root->left, root->left->key->data, leaf, fullEntity);
    deleteElement(root->left, root->right->key->data, leaf, fullEntity);
    root = nullptr;
}

bool compareTrees(treeNodeServices*& root1, treeNodeServices*& root2, treeNodeServices* leaf, bool& flag)
{
    if (flag == false)
    {
        return false;
    }
    if (root1 != leaf && root2 != leaf)
    {
        flag = true;
        compareTrees(root1->left, root2->left, leaf, flag);
        compareTrees(root1->right, root2->right, leaf, flag);
    }
    else if (root1 == leaf && root2 == leaf)
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    return flag;
}

int updateServiceIndexInList(listServices* head, ServiceEntity* element, int& index) {
    bool flag = false;
    listServices* runner;
    runner = head;
    if (head == nullptr) {
        return false;
    }
    else {
        while (runner->next != head && flag == false) {
            if (isEqualServices(DataStorage::dataServices[runner->data.index], element)) {
                flag = true;
                runner->data.index = index;
                return 0;
            }
            else {
                runner = runner->next;
            }
        }
        if (isEqualServices(DataStorage::dataServices[head->previous->data.index], element)) {
            head->previous->data.index = index;
        }
    }
    return 0;
}

int updateByServiceNameTreeNode2(treeNodeServices*& root, treeNodeServices*& leaf, ServiceEntity* fullEntity, int& index) {
    treeNodeElemServices element;
    element.value = fullEntity->serviceName;
    treeNodeServices* temp = root;
    if (root == nullptr)
    {
        DataStorage::resultSerch = false;
        cout << "The tree does not exist";
        return 0;
    }
    else
    {
        while (temp != leaf)
        {
            if (compareData(temp->key->data, element) == 0)
            {
                return updateServiceIndexInList(temp->key, fullEntity, index);

            }
            else if (compareData(temp->key->data, element) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        return 0;
    }
}

int updateByServiceTypeTreeNode2(treeNodeServices*& root, treeNodeServices*& leaf, ServiceEntity* fullEntity, int& index) {
    treeNodeElemServices element;
    element.value = fullEntity->serviceType;
    treeNodeServices* temp = root;
    if (root == nullptr)
    {
        DataStorage::resultSerch = false;
        cout << "The tree does not exist";
        return 0;
    }
    else
    {
        while (temp != leaf)
        {
            if (compareData(temp->key->data, element) == 0)
            {
                return updateServiceIndexInList(temp->key, fullEntity, index);

            }
            else if (compareData(temp->key->data, element) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        return 0;
    }
}

int updateByServiceDivisionTreeNode(treeNodeServices*& root, treeNodeServices*& leaf, ServiceEntity* fullEntity, int& index) {
    treeNodeElemServices element;
    element.value = fullEntity->division;
    treeNodeServices* temp = root;
    if (root == nullptr)
    {
        DataStorage::resultSerch = false;
        cout << "The tree does not exist";
        return 0;
    }
    else
    {
        while (temp != leaf)
        {
            if (compareData(temp->key->data, element) == 0)
            {
                return updateServiceIndexInList(temp->key, fullEntity, index);

            }
            else if (compareData(temp->key->data, element) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        return 0;
    }
}

int updateByServiceTermTreeNode(treeNodeServices*& root, treeNodeServices*& leaf, ServiceEntity* fullEntity, int& index) {
    treeNodeElemServices element;
    element.value = fullEntity->term;
    treeNodeServices* temp = root;
    if (root == nullptr)
    {
        DataStorage::resultSerch = false;
        cout << "The tree does not exist";
        return 0;
    }
    else
    {
        while (temp != leaf)
        {
            if (compareTerm(temp->key->data, element) == 0)
            {
                return updateServiceIndexInList(temp->key, fullEntity, index);

            }
            else if (compareTerm(temp->key->data, element) == -1)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }
        return 0;
    }
}
