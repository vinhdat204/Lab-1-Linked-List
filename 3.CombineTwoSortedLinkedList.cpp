// STT: 22520228
// Full Name: Nguyen Vinh Dat
// Lab 1: In-Class exercise 1



#include <iostream>
#include "Node.h"
using namespace std;



Node* CombineTwoSortedLinkedList(Node *h1, Node *h2) {
    Node *t1 = nullptr;
    Node *t2 = nullptr;
    
    Node *ptr = h1;
    while(ptr != nullptr) {
        t1 = ptr;
        ptr = ptr->next;
    }

    ptr = h2;
    while(ptr != nullptr) {
        t2 = ptr;
        ptr = ptr->next;
    }

    if(t1->data <= h2->data) {
        t1->next = h2;
        ptr = h1;
    } else if(t2->data <= h1->data) {
        t2->next = h1;
        ptr = h2;
    }

    
    return ptr;
    
}

int main() {
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);

    Node *h1 = n1;
    h1->next = n2;
    n2->next = n3;

    cout << "First linked list: ";
    Node *ptr = h1;
    while(ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    Node *h2 = n4;
    n4->next = n5;
    n5->next = n6;

    cout << "Second linked list: ";
    ptr = h2;
    while(ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    ptr = CombineTwoSortedLinkedList(h2, h1);
    cout << "Combine two sorted linked list: ";
    while(ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    
    cout << endl;
}