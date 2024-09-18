// STT: 22520228
// Full Name: Nguyen Vinh Dat
// Lab 1: In-Class exercise 1

#include <iostream>
#include "Node.h"
using namespace std;

void FindNodesHaveValueX(int x, Node *head) {
    bool flag = false;
    cout << "The address of nodes have value (x = " << x << "): ";
    while(head != nullptr) {
        if(head->data == x) {
            flag = true;
            cout << head << " ";
        }
        head = head->next;
    }

    if(flag == false) {
        cout << "NULL";
    }
    cout << endl;
}

int main() {
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(4);
    Node *n6 = new Node(6);

    Node *head = n1;
    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;

    cout << "Linked list: ";
    Node *ptr = head;
    while(ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;


    FindNodesHaveValueX(9, head);
    return 0;
}