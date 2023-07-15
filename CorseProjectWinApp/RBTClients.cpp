#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
//#include <Windows.h>
#include "RBT.h"
#include"ReaderClients.h"
#include "DataClientsStorage.h"


using namespace std;

//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

/*struct Key {
	int f;
	int s;
	int t;
};

struct List_node {
	Key keys;
	List_node* next;
	int cnt;
}*/;

//int comparator(Key first, Key second) {
//	if (first.first > second.first) {
//		return 1;
//	}
//	else if (first.first < second.first) {
//		return -1;
//	}
//	else {
//		if (first.second > second.second) {
//			return 1;
//		}
//		else if (first.second < second.second) {
//			return -1;
//		}
//		else {
//			if (first.third > second.third) {
//				return 1;
//			}
//			else if (first.third < second.third) {
//				return -1;
//			}
//			else {
//				return 0;
//			}
//		}
//	}
//}

int comparator(string first, string second)
{
	if (first > second)
	{
		return 1;
	}
	else if (first < second)
	{
		return -1;
	}
	else {
		return 0;
	}
}


List_node* list_init()
{
	List_node* root = nullptr;
	return root;
}

bool in(List_node* root, string value)
{
	if (root == nullptr)
	{
		return false;
	}
	List_node* temp = root;
	while (temp->next != root)
	{
		if (comparator(temp->key.value, value) == 0) { return true; }
		temp = temp->next;
	}
	if (comparator(temp->key.value, value) == 0) { return true; }
	return false;
}

List_node* list_insert(List_node*& root, RBTData value)
{
	List_node* element = new(List_node);
	element->key.value = value.value;
	element->key.index = value.index;
	element->cnt = 1;
	element->next = element;

	if (root == nullptr) {
		root = element;
	}
	else {
		List_node* temp = root;
		while ((temp->next != root) && (comparator(temp->key.value, value.value) == 0 && temp->key.index != value.index)) {
			temp = temp->next;
		}
		if (comparator(temp->key.value, value.value) == 0 && temp->key.index == value.index) {
			temp->cnt++;
		}
		else {
			element->next = root;
			temp->next = element;
		}
	}
	return root;
}

List_node* list_erase(List_node*& root, RBTData datavalue)
{
	bool deleted = false;
	string value = datavalue.value;
	int index = datavalue.index;
	if (root != nullptr && !deleted) {
		//if ((root->cnt == 1) && (comparator(root->key.value, value) == 0) && index == root->key.index)//root == 1
		//{
		//	//List_node* temp = root.
		//	root->cnt--;
		//	delete root;
		//	root = nullptr;
		//	return root;
		//}
		if (root->next == root && (comparator(root->key.value, value) == 0) && index == root->key.index && !deleted)
		{
			deleted = true;
			root->cnt--;
			delete root;
			root = nullptr;
			return root;
		}
		if ((root->cnt >= 2) && (comparator(root->key.value, value) == 0) && index == root->key.index && !deleted)
		{
			deleted = true;
			root->cnt--;
			return root;
		}
		if (!deleted && (root->next != root) && (comparator(root->key.value, value) == 0) && index == root->key.index && (root->cnt == 1))
		{
			deleted = true;
			List_node* temp = root;
			while (temp->next != root) { temp = temp->next; }
			List_node* buffer = root;
			temp->next = root->next;
			root = root->next;
			delete buffer;
			buffer = nullptr;

		}
		List_node* temp = root;
		while (temp->next != root && !deleted) {
			if (comparator(temp->next->key.value, value) == 0 && !deleted)  {
				if (temp->next->cnt >= 2 && index == temp->next->key.index) {
					deleted = true;
					temp->next->cnt--;
					return root;
				}
				else if(index == temp->next->key.index && !deleted) {
					deleted = true;
					List_node* buffer = temp->next;
					temp->next = buffer->next;
					delete buffer;
					buffer = nullptr;
				}
			}
			temp = temp->next;
		}
		return root;
	}
}

int counter(List_node* root, string value)
{
	if (root == nullptr) {
		return 0;
	}
	List_node* temp = root;
	while (temp->next != root)
	{
		if (comparator(temp->key.value, value) == 0) {
			return temp->cnt;
		}
		temp = temp->next;
	}
	if (comparator(temp->key.value, value) == 0) {
		return temp->cnt;
	}
	return 0;
}

void print_list(List_node* root)
{
	if (root == nullptr) {
		cout << "List is empty";
		cout << endl;
	}
	else {
		List_node* temp = root;
		while (temp->next != root) {
			cout << temp->key.value << " (" << temp->cnt << ") " << "->";
			temp = temp->next;
		}
		cout << temp->key.value << " (" << temp->cnt << ") ";
	}
}

//Key parse_key(string input) {
//	Key new_key;
//	int dots_cnt = 0;
//	for (int i = 0; input.length(); i++) {
//		if (input[i] == '.') {
//			dots_cnt++;
//			continue;
//		}
//		else {
//			if (dots_cnt == 0) {
//				new_key.first = stoi(input.substr(i, 2));
//				i++;
//			}
//			else if (dots_cnt == 1) {
//				new_key.second = stoi(input.substr(i, 2));
//				i++;
//			}
//			else {
//				new_key.third = stoi(input.substr(i, 2));
//				break;
//			}
//		}
//	}
//	return new_key;
//};

//struct Node {
//	List_node* data;
//	Node* parent;
//	Node* left;
//	Node* right;
//	int color;// 1 - Black
//};

Node* root_init(Node* nullnode) {
	Node* root = nullnode;
	return root;
}

Node* null_init() {
	Node* nullnode = new Node;
	nullnode->left = nullptr;
	nullnode->right = nullptr;
	nullnode->color = 1;
	return nullnode;
}

bool searchByFieldClient(Node* root, Node* nullnode, RBTData datavalue, int& count )
{
	Node* temp = root;
	DataClientsStorage::resultSearch = false;
	while (temp != nullnode) {
		count++;
		DataClientsStorage::countComparisons = count;
		if (comparator(temp->data->key.value, datavalue.value) == 0 && temp->data->key.index == datavalue.index)
		{
			DataClientsStorage::index = temp->data->key.index;
			DataClientsStorage::resultSearch = true;
			return true;
		}
		if (comparator(datavalue.value, temp->data->key.value) == 1) { temp = temp->right; }
		else { temp = temp->left; }
	}
	DataClientsStorage::resultSearch = false;
	return false;
}

bool pre_search(Node* root, Node* nullnode,string value, int& count) {
	Node* temp = root;
	DataClientsStorage::resultSearch = false;
	while (temp != nullnode) {
		count++;
		DataClientsStorage::countComparisons = count;
		if (comparator(temp->data->key.value, value) == 0) 
		{ 
		DataClientsStorage::index = temp->data->key.index;
		DataClientsStorage::resultSearch = true;
		return true; }
		if (comparator(value, temp->data->key.value) == 1) { temp = temp->right; }
		else { temp = temp->left; }
	}
	DataClientsStorage::resultSearch = false;
	return false;
}

void rightRotate(Node* element, Node*& root, Node* nullnode) {
	Node* y = element->left;
	element->left = y->right;
	if (y->right != nullnode) {
		y->right->parent = element;
	}
	y->parent = element->parent;
	if (element->parent == nullptr) {
		root = y;
	}
	else if (element == element->parent->right) {
		element->parent->right = y;
	}
	else {
		element->parent->left = y;
	}
	y->right = element;
	element->parent = y;
}

void leftRotate(Node* element, Node*& root, Node* nullnode) {
	Node* y = element->right;
	element->right = y->left;
	if (y->left != nullnode) {
		y->left->parent = element;
	}
	y->parent = element->parent;
	if (element->parent == nullptr) {
		root = y;
	}
	else if (element == element->parent->left) {
		element->parent->left = y;
	}
	else {
		element->parent->right = y;
	}
	y->left = element;
	element->parent = y;
}

void insert_balance(Node*& element, Node*& root, Node* nullnode) {
	Node* uncle;
	while (element->parent->color == 0) {
		if (element->parent == element->parent->parent->left) {// ???? ???????? ??? ????? ??????? ????
			uncle = element->parent->parent->right;
			if (uncle->color == 0) {// ???? ??????? ? ???? ??????? //	? ??? ? ???? ?????
				uncle->color = 1;// ?? ????  ? ???? ?? ??????, ? ???? ?? ???????
				element->parent->color = 1;
				element->parent->parent->color = 0;
				element = element->parent->parent;
			}
			else { ///if ((uncle->color == 1) || (uncle != nullptr))
				if (element == element->parent->right) {
					element = element->parent;
					leftRotate(element, root, nullnode);
				}
				element->parent->color = 1;// ???? ???????? ??????
				element->parent->parent->color = 0;// ???? ???????
				rightRotate(element->parent->parent, root, nullnode);// ?????? ???????

			}
		}
		else {// ???? ???????? ??? ?????? ??????? ????
			uncle = element->parent->parent->left;
			if (uncle->color == 0) {// ???? ??????? ? ???? ???????//{1 - ?????? //	
				uncle->color = 1;// ?? ????  ? ???? ?? ??????, ? ???? ?? ???????
				element->parent->color = 1;
				element->parent->parent->color = 0;
				element = element->parent->parent; //1 - ??????}
			}
			else {// ???? ???? ??????
				if (element == element->parent->left) {// ???????? ??????????? ???????{2 - ??????
					element = element->parent;// ???? ? ??? ????????
					rightRotate(element, root, nullnode);// ?????? ??????? 2 - ??????}
				}
				element->parent->color = 1;// ???? ???????? ??????{3 - ??????
				element->parent->parent->color = 0;// ???? ???????
				leftRotate(element->parent->parent, root, nullnode);// ????? ??????? 3 - ??????}
			}
		}
		if (element == root) { break; }
	}
	root->color = 1;

}

Node* insert(Node*& root, Node* nullnode, RBTData input) {
	//Key keychik = parse_key(input);
	int local = 0;
	if (!pre_search(root, nullnode, input.value,local)) {
		Node* element = new Node;
		element->parent = nullptr;
		element->left = nullnode;
		element->right = nullnode;
		element->color = 0;// red
		element->data = list_init();
		list_insert(element->data, input);
		Node* parent_buffer = nullptr;
		Node* runner = root;
		while (runner != nullnode) {
			parent_buffer = runner;
			if (comparator(element->data->key.value, runner->data->key.value) == -1) {
				runner = runner->left;
			}
			else { runner = runner->right; }
		}
		element->parent = parent_buffer;
		if (parent_buffer == nullptr) {
			root = element;
		}
		else if (comparator(element->data->key.value, parent_buffer->data->key.value) == -1) {
			parent_buffer->left = element;
		}
		else { parent_buffer->right = element; }
		if (element->parent == nullptr) {
			element->color = 1;
			return root;
		}
		if (element->parent->parent == nullptr) {
			return root;
		}
		insert_balance(element, root, nullnode);
	}
	else {
		Node* temp = root;
		while (temp != nullnode) {
			if (comparator(temp->data->key.value, input.value) == 0) { list_insert(temp->data, input); break; }
			if (comparator(input.value, temp->data->key.value) == 1) { temp = temp->right; }
			else { temp = temp->left; }
		}
	}
	return root;
}

void transplant(Node*& root, Node* nullnode, Node* u, Node* v) {
	if ((u->parent == nullnode) || (u->parent == nullptr)) {
		root = v;
	}
	else if (u == u->parent->left) {
		u->parent->left = v;
	}
	else {
		u->parent->right = v;
	}
	v->parent = u->parent;
}

void erase_balance(Node*& root, Node* nullnode, Node* element) {
	Node* brother;
	while ((element != root) && (element->color == 1)) {
		if (element == element->parent->left) {
			brother = element->parent->right;
			if (brother->color == 0) {
				brother->color = 1;
				element->parent->color = 0;
				leftRotate(element->parent, root, nullnode);
				brother = element->parent->right;
			}
			if ((brother->left->color == 1) && (brother->right->color == 1)) {
				brother->color = 0;
				element = element->parent;
			}
			else {
				if (brother->right->color == 1) {
					brother->left->color = 1;
					brother->color = 0;
					rightRotate(brother, root, nullnode);
					brother = element->parent->right;
				}
				brother->color = element->parent->color;
				element->parent->color = 1;
				brother->right->color = 1;
				leftRotate(element->parent, root, nullnode);
				element = root;
			}
		}
		else {
			brother = element->parent->left;
			if (brother->color == 0) {
				brother->color = 1;
				element->parent->color = 0;
				rightRotate(element->parent, root, nullnode);
				brother = element->parent->left;
			}
			if ((brother->left->color == 1) && (brother->right->color == 1)) {
				brother->color = 0;
				element = element->parent;
			}
			else {
				if (brother->left->color == 1) {
					brother->right->color = 1;
					brother->color = 0;
					leftRotate(brother, root, nullnode);
					brother = element->parent->left;
				}
				brother->color = element->parent->color;
				element->parent->color = 1;
				brother->left->color = 1;
				rightRotate(element->parent, root, nullnode);
				element = root;
			}
		}
	}
	element->color = 1;
}

Node* right_min(Node* element, Node* nullnode) {
	while (element->left != nullnode) {
		element = element->left;
	}
	return element;
}

Node* memory_erase(Node*& root, Node* nullnode, RBTData value) {
	//Key key = parse_key(input);
	Node* temp = root;
	//Node* z = nullnode;
	//Node* element;
	//Node* y;
	if (temp == nullnode) {
		return root;
	}
	while (temp->data->cnt > 1) {
		list_erase(temp->data, value);
	}
	// если что переписать лист под удаление всех величин
	list_erase(temp->data, value);
	temp->left = nullptr;
	temp->right = nullptr;
	temp->parent = nullptr;
	temp->data = nullptr;
	delete temp;
	temp = nullptr;

	return nullptr;
}

Node* eraseClient(Node*& root, Node* nullnode, RBTData datavalue) {
	string input = datavalue.value;
	int index = datavalue.index;
	if (root == nullptr) { cout << "Element is not exist" << '\n'; return nullptr; }
	//Key key = parse_key(input);
	Node* temp = root;
	Node* z = nullnode;
	Node* element;
	Node* y;
	while (temp != nullnode) {
		if (comparator(temp->data->key.value, input) == 0) { z = temp; }
		if ((comparator(temp->data->key.value, input) == 0) || (comparator(temp->data->key.value, input) == -1)) { temp = temp->right; }
		else { temp = temp->left; }
	}

	if (z == nullnode) {
		cout << "Couldn't find key in the tree" << endl;
		return root;
	}
	if (z->data->next != z->data) {
		list_erase(z->data, datavalue);
	}
	else {
		y = z;
		int y_original_color = y->color;
		if (z->left == nullnode) {
			element = z->right;
			transplant(root, nullnode, z, z->right);
		}
		else if (z->right == nullnode) {
			element = z->left;
			transplant(root, nullnode, z, z->left);
		}
		else {
			y = right_min(z->right, nullnode);
			y_original_color = y->color;
			element = y->right;
			if (y->parent == z) {
				element->parent = y;
			}
			else {
				transplant(root, nullnode, y, y->right);
				y->right = z->right;
				y->right->parent = y;
			}

			transplant(root, nullnode, z, y);
			y->left = z->left;
			y->left->parent = y;
			y->color = z->color;
		}
		list_erase(z->data, datavalue);
		delete z;
		if (y_original_color == 1) {
			erase_balance(root, nullnode, element);
		}
	}
	return root;
}

int get_height(Node* root) {
	if (root == nullptr) { return 0; }
	else {
		return max(get_height(root->left), get_height(root->right)) + 1;
	}
}

//void memory_pull_up(Node*& root,Node*  nullnode) {
//
//	while (root != nullnode) {
//		pre_erase(root, nullnode, root->data->keys);
//	}
//	//pre_erase(root, nullnode, root->data->keys);
//
//}

void pre_memory_pull_up(Node*& root, Node* nullnode) {
	if (root->left != nullnode) {
		pre_memory_pull_up(root->left, nullnode);
	}
	if (root->right != nullnode) {
		pre_memory_pull_up(root->right, nullnode);
	}
	RBTData value;
	value.value = root->data->key.value;
	value.index = -1;
	memory_erase(root, nullnode, value);

}
void memory_pull_up(Node*& root, Node* nullnode)
{
	pre_memory_pull_up(root, nullnode);
	root = nullptr;
	return;
}
void print(Node* root, Node* nullnode, int h, int ln) {
	//if (root == nullptr) { cout << "RBT is empty"; return; }
	if ((root != nullnode) && (root != nullptr)) {
		print(root->right, nullnode, h + 4, ln);
		for (int i = 1; i <= h; i++)cout << ' ';
		print_list(root->data);
		if (root->color) {
			cout << 'B';
			for (size_t i = 0; i < ln; i++)
			{
				cout << '\n';
			}
		}
		else {
			//SetConsoleTextAttribute(hConsole, 12);
			cout << 'R';
			//SetConsoleTextAttribute(hConsole, 15);
			for (size_t i = 0; i < ln; i++)
			{
				cout << '\n';
			}
		}
		print(root->left, nullnode, h + 4, ln);
		return;

	}
	if (root == nullnode) {
		/*if ((root->parent == nullnode) || (root->parent == nullptr)) {
			cout << "RBT is empty" << '\n';
			return;
		}*/
		if (root->parent == nullptr) {
			cout << "RBT is empty" << '\n';
			return;
		}

		for (int i = 0; i < h + 3; i++)cout << ' ';
		cout << nullnode->left << " B";
		for (size_t i = 0; i < ln; i++)
		{
			cout << '\n';
		}
		return;
	}
	if (root == nullptr) {
		cout << "RBT is empty" << '\n';
		return;
	}
}

int updateTreeNode(Node* root, Node* nullnode, ClientsEntity* input, string comparable, int& index) {

	if (root != nullnode) {
		if (comparator(root->data->key.value, comparable) == 1) {
			if (root->left != nullnode) {
				updateTreeNode(root->left,nullnode, input,comparable, index);
			}
			else {
				return 0;
			}
		}
		else if (comparator(root->data->key.value, comparable) == -1) {
			if (root->right != nullnode) {
				updateTreeNode(root->right, nullnode, input, comparable, index);
			}
			else {
				return 0;
			}
		}
		else {
			
			if (isEqualElementsClients(input, DataClientsStorage::data[root->data->key.index]) )
			{
				root->data->key.index = index;
				return 0;
			}
			else {
				List_node* temp = root->data;
				while (temp->next->key.index != root->data->key.index) {
					if (isEqualElementsClients(input, DataClientsStorage::data[temp->next->key.index])) {
						temp->next->key.index = index;
						return 0;
					}
					temp = temp->next;
				}
				if (isEqualElementsClients(input, DataClientsStorage::data[root->data->key.index])) {
					temp->key.index = index;
					return 0;
				}
				if (root->left != nullnode) {
					updateTreeNode(root->left,nullnode, input, comparable, index);
				}
				if (root->right != nullnode) {
					updateTreeNode(root->right, nullnode, input, comparable, index);
				}
			}

		}
	}
	else {
		return 0;
	}
}

//int updateJobTreeNode(Node* root, Node* nullnode, string input, int& index) {
//	RBTData datavalue;
//	datavalue.value = input;
//	datavalue.index = index;
//	if (root != nullnode) {
//		if (comparator(root->data->key.value, input) == 1) {
//			if (root->left != nullnode) {
//				updateJobTreeNode(root->left, nullnode, input, index);
//			}
//			else {
//				return 0;
//			}
//		}
//		else if (comparator(root->data->key.value, input) == -1) {
//			if (root->right != nullnode) {
//				updateJobTreeNode(root->right, nullnode, input, index);
//			}
//			else {
//				return 0;
//			}
//		}
//		else {
//			if (input == DataClientsStorage::data[root->data->key.index]->job)
//			{
//				root->data->key.index = index;
//				return 0;
//			}
//			else {
//				List_node* temp = root->data;
//				while (temp->next->key.index != root->data->key.index) {
//					if (input == DataClientsStorage::data[root->data->key.index]->job) {
//						temp->key.index = index;
//						return 0;
//					}
//					temp = temp->next;
//				}
//				if (input == DataClientsStorage::data[root->data->key.index]->job) {
//					temp->key.index = index;
//					return 0;
//				}
//				if (root->left != nullnode) {
//					updateJobTreeNode(root->left, nullnode, input, index);
//				}
//				if (root->right != nullnode) {
//					updateJobTreeNode(root->right, nullnode, input, index);
//				}
//			}
//
//		}
//	}
//	else {
//		return 0;
//	}
//}
//
//int updateEmailTreeNode(Node* root, Node* nullnode, string input, int& index) {
//	RBTData datavalue;
//	datavalue.value = input;
//	datavalue.index = index;
//	if (root != nullnode) {
//		if (comparator(root->data->key.value, input) == 1) {
//			if (root->left != nullnode) {
//				updateEmailTreeNode(root->left, nullnode, input, index);
//			}
//			else {
//				return 0;
//			}
//		}
//		else if (comparator(root->data->key.value, input) == -1) {
//			if (root->right != nullnode) {
//				updateEmailTreeNode(root->right, nullnode, input, index);
//			}
//			else {
//				return 0;
//			}
//		}
//		else {
//			if (input == DataClientsStorage::data[root->data->key.index]->email)
//			{
//				root->data->key.index = index;
//				return 0;
//			}
//			else {
//				List_node* temp = root->data;
//				while (temp->next->key.index != root->data->key.index) {
//					if (input == DataClientsStorage::data[root->data->key.index]->email) {
//						temp->key.index = index;
//						return 0;
//					}
//					temp = temp->next;
//				}
//				if (input == DataClientsStorage::data[root->data->key.index]->email) {
//					temp->key.index = index;
//					return 0;
//				}
//				if (root->left != nullnode) {
//					updateEmailTreeNode(root->left, nullnode, input, index);
//				}
//				if (root->right != nullnode) {
//					updateEmailTreeNode(root->right, nullnode, input, index);
//				}
//			}
//
//		}
//	}
//	else {
//		return 0;
//	}
//}
//
//int updateFullnameTreeNode(Node* root, Node* nullnode, string input, int& index) {
//	RBTData datavalue;
//	datavalue.value = input;
//	datavalue.index = index;
//	if (root != nullnode) {
//		if (comparator(root->data->key.value, input) == 1) {
//			if (root->left != nullnode) {
//				updateFullnameTreeNode(root->left, nullnode, input, index);
//			}
//			else {
//				return 0;
//			}
//		}
//		else if (comparator(root->data->key.value, input) == -1) {
//			if (root->right != nullnode) {
//				updateFullnameTreeNode(root->right, nullnode, input, index);
//			}
//			else {
//				return 0;
//			}
//		}
//		else {
//			if (input == DataClientsStorage::data[root->data->key.index]->fullname.surname + ' ' 
//				+ DataClientsStorage::data[root->data->key.index]->fullname.name + ' '
//				+ DataClientsStorage::data[root->data->key.index]->fullname.lastname) 
//			{
//				root->data->key.index = index;
//				return 0;
//			}
//			else {
//				List_node* temp = root->data;
//				while (temp->next->key.index != root->data->key.index) {
//					if (input == DataClientsStorage::data[root->data->key.index]->fullname.surname + ' '
//						+ DataClientsStorage::data[root->data->key.index]->fullname.name + ' '
//						+ DataClientsStorage::data[root->data->key.index]->fullname.lastname) {
//						temp->key.index = index;
//						return 0;
//					}
//					temp = temp->next;
//				}
//				if (input == DataClientsStorage::data[root->data->key.index]->fullname.surname + ' '
//					+ DataClientsStorage::data[root->data->key.index]->fullname.name + ' '
//					+ DataClientsStorage::data[root->data->key.index]->fullname.lastname) {
//					temp->key.index = index;
//					return 0;
//				}
//				if (root->left != nullnode) {
//					updateFullnameTreeNode(root->left, nullnode, input, index);
//				}
//				if (root->right != nullnode) {
//					updateFullnameTreeNode(root->right, nullnode, input, index);
//				}
//			}
//
//		}
//	}
//	else {
//		return 0;
//	}
//}
//
//int updateClientTreeNode(Node* root, Node* nullnode, string input, int& index) {
//	RBTData datavalue;
//	datavalue.value = input;
//	datavalue.index = index;
//	if (root != nullnode) {
//		if (comparator(root->data->key.value, input) == 1) {
//			if (root->left != nullnode) {
//				updateClientTreeNode(root->left, nullnode, input, index);
//			}
//			else {
//				return 0;
//			}
//		}
//		else if (comparator(root->data->key.value, input) == -1) {
//			if (root->right != nullnode) {
//				updateClientTreeNode(root->right, nullnode, input, index);
//			}
//			else {
//				return 0;
//			}
//		}
//		else {
//			if (input == (DataClientsStorage::data[root->data->key.index]->fullname.surname + ' ' + DataClientsStorage::data[root->data->key.index]->fullname.name + ' '
//				+ DataClientsStorage::data[root->data->key.index]->fullname.lastname + ' ' + DataClientsStorage::data[root->data->key.index]->job + ' ' + DataClientsStorage::data[root->data->key.index]->email
//				+ ' ' + to_string(DataClientsStorage::data[root->data->key.index]->passport.series) + to_string(DataClientsStorage::data[root->data->key.index]->passport.number)))
//			{
//				root->data->key.index = index;
//				return 0;
//			}
//			else {
//				List_node* temp = root->data;
//				while (temp->next->key.index != root->data->key.index) {
//					if (input == (DataClientsStorage::data[root->data->key.index]->fullname.surname + ' ' + DataClientsStorage::data[root->data->key.index]->fullname.name + ' '
//						+ DataClientsStorage::data[root->data->key.index]->fullname.lastname + ' ' + DataClientsStorage::data[root->data->key.index]->job + ' ' + DataClientsStorage::data[root->data->key.index]->email
//						+ ' ' + to_string(DataClientsStorage::data[root->data->key.index]->passport.series) + to_string(DataClientsStorage::data[root->data->key.index]->passport.number))) {
//						temp->key.index = index;
//						return 0;
//					}
//					temp = temp->next;
//				}
//				if (input == (DataClientsStorage::data[root->data->key.index]->fullname.surname + ' ' + DataClientsStorage::data[root->data->key.index]->fullname.name + ' '
//					+ DataClientsStorage::data[root->data->key.index]->fullname.lastname + ' ' + DataClientsStorage::data[root->data->key.index]->job + ' ' + DataClientsStorage::data[root->data->key.index]->email
//					+ ' ' + to_string(DataClientsStorage::data[root->data->key.index]->passport.series) + to_string(DataClientsStorage::data[root->data->key.index]->passport.number))) {
//					temp->key.index = index;
//					return 0;
//				}
//				if (root->left != nullnode) {
//					updateClientTreeNode(root->left, nullnode, input, index);
//				}
//				if (root->right != nullnode) {
//					updateClientTreeNode(root->right, nullnode, input, index);
//				}
//			}
//
//		}
//	}
//	else {
//		return 0;
//	}
//}

void debugPrintList(List_node* root,ofstream& fout)
{
	//system("chcp 1251 > nul");
	if (root == nullptr) {
		fout << "List is empty";
		fout << endl;
	}
	else {
		List_node* temp = root; string tempstr;
		while (temp->next != root) {
			fout << temp->key.value << " (" << temp->cnt << ")|index: "<< to_string(temp->key.index) << "|->";
			temp = temp->next;
		}
		fout << temp->key.value << " (" << temp->cnt << ")|index: " << to_string(temp->key.index);
	}
}

void debugPrintRBTClient(Node* root, Node* nullnode,ofstream& fout,int h, int ln)
{
	if ((root != nullnode) && (root != nullptr)) {
		debugPrintRBTClient(root->right, nullnode,fout, h + 4, ln);
		for (int i = 1; i <= h; i++)fout << ' ';
		debugPrintList(root->data,fout);
		if (root->color) {
			fout << "| B";
			for (size_t i = 0; i < ln; i++)
			{
				fout << '\n';
			}
		}
		else {
			//SetConsoleTextAttribute(hConsole, 12);
			fout << "| R";
			//SetConsoleTextAttribute(hConsole, 15);
			for (size_t i = 0; i < ln; i++)
			{
				fout << '\n';
			}
		}
		debugPrintRBTClient(root->left, nullnode,fout, h + 4, ln);
		return;

	}
	if (root == nullnode) {
		/*if ((root->parent == nullnode) || (root->parent == nullptr)) {
			cout << "RBT is empty" << '\n';
			return;
		}*/
		if (root->parent == nullptr) {
			fout << "RBT is empty" << '\n';
			return;
		}

		for (int i = 0; i < h + 3; i++)fout << ' ';
		fout << nullnode->left << " | B";
		for (size_t i = 0; i < ln; i++)
		{
			fout << '\n';
		}
		return;
	}
	if (root == nullptr) {
		fout << "RBT is empty" << '\n';
		return;
	}

}
