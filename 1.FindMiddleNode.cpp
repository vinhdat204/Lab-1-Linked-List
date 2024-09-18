// STT: 22520228
// Full Name: Nguyen Vinh Dat
// Lab 1: In-Class exercise 1

#include <iostream>
#include "Node.h"
using namespace std;

void FindMiddleNode(Node *head) {
    Node *ptr = head;
    int length = 0;
    while(ptr != nullptr) {
        length++;
        ptr = ptr->next;
    }

    int mid = (length - 1) / 2 ;
    for(int i = 0; i < mid; i++) {
        head = head->next;
    }
    if(length % 2 == 1) {
        cout << "Middle node: " << head->data << endl;
    } else {
        cout << "Middle nodes of linked list: " << head->data << "," << head->next->data << endl;
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

    Node *ptr = head;
    cout << "Linked list: ";
    while(ptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    FindMiddleNode(head);

    return 0;
}