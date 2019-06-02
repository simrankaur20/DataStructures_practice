#include <iostream>
using namespace std;
#include "Node.h"

void printNodes(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";        // 10
        temp = temp -> next;
    }
}

int length(Node *head) {
    int len = 0;
    Node *temp = head;
    while(head != NULL) {
        head = head -> next;
        len++;
    }
    return len;
}




int main() {
    // Create 3 nodes with data 10, 20 & 30
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);

    // Connect 3 nodes
    n1 -> next = n2;
    n2 -> next = n3;

    // Save address of 1st node in head pointer
    Node *head = n1;

    // Print all nodes using loop (use head only)
    //cout << n1 -> data << " " << n2 -> data << " " << n3 -> data << endl;
    printNodes(head);
    printNodes(head);












    /*
    Node n1(10);
    Node n2(20);
    Node n3(30);

    Node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;

    cout << n1.data << " " << n2.data << " " << n3.data << endl;

    cout << (*head).data << " ";        // head -> data     10
    head = head -> next;            // head = (*head).next;
    cout << head -> data << " ";    // 20
    head = head -> next;
    cout << head -> data << endl;   // 30

    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
    */


    // Dynamically
    





























}
