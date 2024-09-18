// STT: 22520228
// Full Name: Nguyen Vinh Dat
// Lab 1: In-Class exercise 1

#include <iostream>
#include "Node.h"
using namespace std;

Node* EliminateDuplicateSortedList(Node *head) {
    Node *s = head;

    while(head != nullptr) {
        Node *ptr = head->next;
        while(ptr != nullptr) {
            if(ptr->data == head->data) {
                Node *delNode = ptr;
                ptr = ptr->next;
                head->next = ptr;
                delete delNode;
            } else {
                break;
            }
        }
        head = ptr;
    }

    return s;
}

int main() {
    Node *n1 = new Node(1);
    Node *n2 = new Node(1);
    Node *n3 = new Node(2);
    Node *n4 = new Node(3);
    Node *n5 = new Node(3);
    Node *n6 = new Node(6);
    Node *n7 = new Node(6);

    Node *head = n1;
    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;

    cout << "Linked list: ";
    Node *ptr = head;
    while(ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    cout << "Eliminate duplicate element in linked list: ";
    head = EliminateDuplicateSortedList(head);
    ptr = head;
    while(ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    return 0;
}