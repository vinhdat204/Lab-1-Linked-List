// STT: 22520228
// Full Name: Nguyen Vinh Dat
// Lab 1: In-Class exercise 1

#include <iostream>
#include "Node.h"
using namespace std;

void DetectCycleLinkedList(Node *head) {
    Node *ptr = head;
    ptr = ptr->next;
    while(ptr != nullptr && ptr != head) {
        ptr = ptr->next;
    }
    if(ptr == nullptr) {
        cout << "Linked list is not a cycle linked list" << endl;
    } else if(ptr == head) {
        cout << "Linked list is a cycle linked list" << endl;
    }
}

int main() {
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
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
    cout << endl << endl;

    cout << "Before link the last node to the first node:" << endl;
    DetectCycleLinkedList(head);
    cout << endl;

    n6->next = n1;
    cout << "After link the last node to the first node:" << endl;
    DetectCycleLinkedList(head);
}