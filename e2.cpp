#include <iostream>

class Node
{
public:
	int data;
	Node* next;
	Node(int _data) : data(_data) {}
};

class OneLinkedList
{
public:
	Node* head, * tail;

	OneLinkedList() {
		this->head = NULL;
		this->tail = NULL;
	}

	~OneLinkedList()
	{

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

	void pop_back()
	{
	

	}



	void push_front(int data) {
		Node* node = new Node(data);
		node->next = head;
		head = node;
		if (tail == NULL) tail = node;
	}

	void push_back(int data) {
		Node* node = new Node(data);
		if (head == NULL) head= node;
		if (tail == NULL) tail->next = node;
		tail = node;

	}
	void show_head() {
		std::cout << "Head: " << head->data << std::endl;
	}

	void show_tail() {
		std::cout << "Tail: " << tail->data << std::endl;
	}
	void show_all() {
		Node* tmp_node = head;
		while (tmp_node != NULL) {
			std::cout << tmp_node->data << ' ';
			tmp_node = tmp_node->next;
		}
		std::cout << std::endl;

	}
};
	std::cout << std::endl;


int main()
{
	OneLinkedList list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	list.show_head();
	list.show_tail();
	list.show_all();

	return 0;
}

