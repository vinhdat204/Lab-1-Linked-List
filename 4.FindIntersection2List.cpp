// STT: 22520228
// Full Name: Nguyen Vinh Dat
// Lab 1: In-Class exercise 1

#include <iostream>
#include "Node.h"
using namespace std;

void FindIntersection2List(Node *h1, Node *h2) {
    while(h1 != nullptr) {
        Node *ptr = h2;
        while(ptr != nullptr) {
            if(ptr->data == h1->data) {
                cout << h1->data << " ";
                break;
            }

            ptr = ptr->next;
        }
        h1 = h1->next;
    }
}

int main() {
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *h1 = n1;
    n1->next = n2;
    n2->next = n3;


    Node *n4 = new Node(1);
    Node *n5 = new Node(3);
    Node *n6 = new Node(4);
    Node *h2 = n4;
    n4->next = n5;
    n5->next = n6;

    cout << "First linked list: ";
    Node *ptr = h1;
    while(ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    cout << "Second linked list: ";
    ptr = h2;
    while(ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    cout << "Intersection of two linked list: ";
    FindIntersection2List(h1, h2);
    cout << endl;
    return 0;
}