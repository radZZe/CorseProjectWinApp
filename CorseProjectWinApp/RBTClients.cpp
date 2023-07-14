#include <iostream>
#include <string>
#include <algorithm>
#include <Windows.h>
#include "RBT.h"
#include "DataClientsStorage.h"


using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

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
		if (comparator(temp->key, value) == 0) { return true; }
		temp = temp->next;
	}
	if (comparator(temp->key, value) == 0) { return true; }
	return false;
}

List_node* list_insert(List_node*& root, string value)
{
	List_node* element = new(List_node);
	element->key = value;
	element->cnt = 1;
	element->next = element;

	if (root == nullptr) {
		root = element;
	}
	else {
		List_node* temp = root;
		while ((temp->next != root) && (comparator(temp->key, value) != 0)) {
			temp = temp->next;
		}
		if (comparator(temp->key, value) == 0) {
			temp->cnt++;
		}
		else {
			element->next = root;
			temp->next = element;
		}
	}
	return root;
}

List_node* list_erase(List_node*& root, string value)
{
	if (root != nullptr) {
		if ((root->cnt == 1) && (comparator(root->key, value) == 0))
		{
			root->cnt--;
			delete root;
			root = nullptr;
			return root;
		}
		if ((root->cnt >= 2) && (comparator(root->key, value) == 0))
		{
			root->cnt--;
			return root;
		}
		if ((root->next != root) && (comparator(root->key, value) == 0) && (root->cnt == 1))
		{
			List_node* temp = root;
			while (temp->next != root) { temp = temp->next; }
			List_node* buffer = root;
			temp->next = root->next;
			root = root->next;
			delete buffer;
			buffer = nullptr;

		}
		List_node* temp = root;
		while (temp->next != root) {
			if (comparator(temp->next->key, value) == 0) {
				if (temp->next->cnt >= 2) {
					temp->next->cnt--;
					return root;
				}
				else {
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
		if (comparator(temp->key, value) == 0) {
			return temp->cnt;
		}
		temp = temp->next;
	}
	if (comparator(temp->key, value) == 0) {
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
			cout << temp->key << " (" << temp->cnt << ") " << "->";
			temp = temp->next;
		}
		cout << temp->key << " (" << temp->cnt << ") ";
	}
}

Key parse_key(string input) {
	Key new_key;
	int dots_cnt = 0;
	for (int i = 0; input.length(); i++) {
		if (input[i] == '.') {
			dots_cnt++;
			continue;
		}
		else {
			if (dots_cnt == 0) {
				new_key.first = stoi(input.substr(i, 2));
				i++;
			}
			else if (dots_cnt == 1) {
				new_key.second = stoi(input.substr(i, 2));
				i++;
			}
			else {
				new_key.third = stoi(input.substr(i, 2));
				break;
			}
		}
	}
	return new_key;
};

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

bool pre_search(Node* root, Node* nullnode, string value) {
	Node* temp = root;
	while (temp != nullnode) {
		if (comparator(temp->data->key, value) == 0) { return true; }
		if (comparator(value, temp->data->key) == 1) { temp = temp->right; }
		else { temp = temp->left; }
	}
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

Node* insert(Node*& root, Node* nullnode, string input) {
	//Key keychik = parse_key(input);
	if (!pre_search(root, nullnode, input)) {
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
			if (comparator(element->data->key, runner->data->key) == -1) {
				runner = runner->left;
			}
			else { runner = runner->right; }
		}
		element->parent = parent_buffer;
		if (parent_buffer == nullptr) {
			root = element;
		}
		else if (comparator(element->data->key, parent_buffer->data->key) == -1) {
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
			if (comparator(temp->data->key, input) == 0) { list_insert(temp->data, input); break; }
			if (comparator(input, temp->data->key) == 1) { temp = temp->right; }
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

Node* memory_erase(Node*& root, Node* nullnode, string input) {
	//Key key = parse_key(input);
	Node* temp = root;
	//Node* z = nullnode;
	//Node* element;
	//Node* y;
	if (temp == nullnode) {
		return root;
	}
	while (temp->data->cnt > 1) {
		list_erase(temp->data, input);
	}
	list_erase(temp->data, input);
	temp->left = nullptr;
	temp->right = nullptr;
	temp->parent = nullptr;
	temp->data = nullptr;
	delete temp;
	temp = nullptr;

	return nullptr;
}

Node* erase(Node*& root, Node* nullnode, string input) {
	if (root == nullptr) { cout << "Element is not exist" << '\n'; return nullptr; }
	//Key key = parse_key(input);
	Node* temp = root;
	Node* z = nullnode;
	Node* element;
	Node* y;
	while (temp != nullnode) {
		if (comparator(temp->data->key, input) == 0) { z = temp; }
		if ((comparator(temp->data->key, input) == 0) || (comparator(temp->data->key, input) == -1)) { temp = temp->right; }
		else { temp = temp->left; }
	}

	if (z == nullnode) {
		cout << "Couldn't find key in the tree" << endl;
		return root;
	}
	if (z->data->cnt > 1) {
		list_erase(z->data, input);
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
		list_erase(z->data, input);
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
	memory_erase(root, nullnode, root->data->key);

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
			SetConsoleTextAttribute(hConsole, 12);
			cout << 'R';
			SetConsoleTextAttribute(hConsole, 15);
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

//int searchByPassport(Node* root, Node* nullnode, ClientsEntity* value, int& count)
//{
//	List_node* list = list_init();
//	list->key = value->passport.number + value->passport.series;
//	Node* temp = root;
//	if (root == nullptr)
//	{
//		cout << "The tree does not exist";
//		return false;
//	}
//	else
//	{
//		while (temp != nullnode)
//		{
//			if (comparator(temp->data->key, list->key) == 1) {
//				count++;
//				if (temp->left != nullnode) {
//					searchByPassport(temp->left,nullnode, value, count);
//				}
//				else {
//					DataClientsStorage::countComparisons = count;
//					DataClientsStorage::resultSearch = false;
//					return 0;
//				}
//			}
//			else if (comparator(temp->data->key,list->key) == -1) {
//				count++;
//				if (temp->right != nullnode) {
//					searchByPassport(temp->right, nullnode, value, count);
//				}
//				else {
//					DataClientsStorage::countComparisons = count;
//					DataClientsStorage::resultSearch = false;
//					return 0;
//				}
//			}
//			else {
//				if (isEqualElements(value, DataClientsStorage::data[temp->data->key->index])) {
//					count++;
//					DataClientsStorage::countComparisons = count;
//					DataClientsStorage::resultSerch = true;
//					return 0;
//				}
//				else {
//					listNode* temp = pointer->head;
//					while (temp->ptr->field->index != pointer->head->field->index) {
//						count++;
//						if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
//
//							DataStorage::countComparisons = count;
//							DataStorage::resultSerch = true;
//							return 0;;
//						}
//						temp = temp->ptr;
//					}
//					count++;
//					if (isEqualElements(givenValue, DataStorage::data[temp->field->index])) {
//
//						DataStorage::countComparisons = count;
//						DataStorage::resultSerch = true;
//						return 0;
//					}
//					if (pointer->leftChild != nullptr) {
//						searchByPassportTreeNode(pointer->leftChild, givenValue, count);
//					}
//					if (pointer->rightChild != nullptr) {
//						searchByPassportTreeNode(pointer->rightChild, givenValue, count);
//					}
//				}
//
//			}
//		}
//		return false;
//	}
//}