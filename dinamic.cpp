#include <iostream>

class Node
{
public:
	int data;
	Node* next;

};

class OneLinkedList
{
public:
	Node* head, * tail;

	OneLinkedList() {
		this->head = NULL;
		this->tail = NULL;
	}

	OneLinkedList() {

	}

	void push_front(int data) {
		Node* node = new Node(data);
		node->next = head;
		head = node;
		if (tail == NULL) tail = node;
	}

	void push_back(int data) {
		Node* node = new Node(data);
		node->next = tail;
		tail->next = node;
		tail = node;

	}
};


int main()
{

}