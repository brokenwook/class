#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int _data) : data(_data) {}
};

class TwoLinkedList {
public:
    Node* head, * tail;

    TwoLinkedList() {
        this->head = NULL;
        this->tail = NULL;
    }

    Node* push_front(int data) {
        Node* ptr = new Node(data);
        ptr->next = head;

        if (head != NULL)
            head->prev = ptr;

        if (tail == NULL)
            tail = ptr;

        head = ptr;

        return ptr;
    }

    Node* push_back(int data) {
        Node* ptr = new Node(data);

        ptr->prev = tail;
        if (tail != NULL)
        tail->next = ptr;
        
        if (head == NULL)
            head = ptr;
        tail = ptr;

        return ptr;
    }

    void pop_front() {
        if (head == NULL) return;

        Node* ptr = head->next;
        if (ptr != NULL)
            ptr->prev = NULL;
        else
            tail = NULL;

        delete head;

        head = ptr;
    }

    void pop_back() {
        if (tail == NULL) return;

        Node* ptr = tail->prev;
        if (ptr != NULL)
            ptr->next = NULL;
        else
            head = NULL;

        delete tail;

        tail = ptr;
    }

    void show_head() {
        std::cout << "head: " << head->data << std::endl;
        Node* tmp_node = head->next;
        tmp_node = tmp_node->prev;
        std::cout << "Prev from next: " << tmp_node->data << std::endl;
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

int main() {
    TwoLinkedList list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);

    list.show_head();
    list.show_all();

    return 0;
}
