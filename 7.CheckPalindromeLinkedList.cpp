// STT: 22520228
// Full Name: Nguyen Vinh Dat
// Lab 1: In-Class exercise 1

#include <iostream>
#include "Node.h"
using namespace std;

void CheckPalindromeLinkedList(Node *head) {
    int length = 0;
    Node *ptr = head;
    while(ptr != nullptr) {
        length++;
        ptr = ptr->next;
    }

    int mid = (length - 1) / 2;
    ptr = head;
    for(int i = 0; i <= mid; i++) {
        int x1 = ptr->data;
        Node *tmp = head;
        for(int j = 0; j < length - i - 1; j++) {
            tmp = tmp->next;
        }
        int x2 = tmp->data;
        if(x1 != x2) {
            cout << "Not palindrome linked list" << endl;
            return;
        }
        ptr = ptr->next;
    }

    cout << "Palindrome linked list" << endl;
}

int main() {
    Node *n1 = new Node(3);
    Node *n2 = new Node(2);
    Node *n3 = new Node(91);
    Node *n4 = new Node(91);
    Node *n5 = new Node(2);
    Node *n6 = new Node(3);

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

    CheckPalindromeLinkedList(head);
    return 0;
}