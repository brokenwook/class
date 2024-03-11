#include <iostream>

class Node
{
public:
	int data;
	Node* next;
	Node* prev;
	Node(int _data) : data(_data) {}
};

class TwoLinkedList
{
public:
	Node* head, * tail;

	TwoLinkedList() {
		this->head = NULL;
		this->tail = NULL;
	}

	void pop_front() {
		if (head == NULL) return;
		if (head == tail) {
			delete tail;
			head = tail = NULL;
			return;
		}
		Node* node = head;
		head = head->next;
		delete node;
	}

	int main()
{


	return 0;
}

