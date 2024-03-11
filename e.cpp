#include <iostream>
#include <vector>
using namespace std;
//������, ����, ��������� �����, �������� ������
/*
�������������� � ���. �����������
1)���������� � ����� ��� ������
2) ���������� � ��������
3) �������� �� �����/������
4) ����� ��������
O(1) - �������� ���������� �� "����������� �����", ���������� ���� �� ������ ��� ��������� ������� � ��� � ��� �������
�(N) - ������� ��������� �� ������� ��������, ������� ��������� � ��������� (n - ����������� ����������)
O(logn) - ����� �������� ����� ����� � ������������ ���������, �� ������ �� ��� ������
O(n^2) - �������� ����
O(n!) - ������� ������, ����� �������� ������ ������������� �� ��������� � ������������ ���������*/

//������(�������) - ����� ������� ������� � �����/������ ��� �������� �� �����/������. ������� ����� �������� � ������
//������ ������� � ������� ����� ��� ����� �� ��� � ����� ���(� ��������������� �������. � ���������������� ����� ������ ���������������)

/*������ � ������� ������� ��:
1) �������� ��������� Node
2) ������� ��������*/
class Node {
public:
    int data;
    Node* next;

    Node(int _data): data(_data) {}
};

class OneLinkedList {
public:
    Node* head, * tail;

    OneLinkedList() {
        this->head = NULL;
        this->tail = NULL;
    }

    ~OneLinkedList() {

    }

    void push_front(int data) {
        Node* node = new Node(data);
        node->next = head;
        head = node;
        if (tail == NULL) tail = node;
    }

    void push_back(int data) {
        Node* node = new Node(data);
        if (head == NULL) {
            head = node;
        }
        if (tail != NULL) {
            tail->next = node;
        }
        tail = node;
    }

    void show_head() {
        cout << "Head: " << head->data << endl;
    }
    void show_tail() {
        cout << "Tail: " << tail->data << endl;
    }
    void show_all() {
        Node* tmp_node = head;
        while (true){
            if (tmp_node != NULL) {
                cout << tmp_node->data << ' '; 
                tmp_node = head->next;
            }
            else { break; }
        }
    }
};

void osn0() {
    OneLinkedList list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    list.show_head();
    list.show_tail();

    list.show_all();
}

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(0));
    osn0();
    return 0;
}