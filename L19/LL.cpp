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




Node* takeInput_rec() {
    int elem;
    cin >> elem;

    if(elem == -1) {
        return NULL;
    }

    Node *head = new Node(elem);

    Node *x = takeInput_rec();
    head -> next = x;
    return head;
}




























// Take input from user, create LL and return head
Node* takeInput() {
    int elem;
    cin >> elem;

    Node *head = NULL;          // LL is empty currently
    Node *tail = NULL;          // LL is empty
    while(elem != -1) {
        // Create a new node
        Node *n = new Node(elem);
        
        if(head == NULL) {
            // Save address of 1st node in head
            head = n;
            tail = n;
        }
        else {
            // tail is holding the address of last node
            tail -> next = n;
            tail = n;
        }

        // Enter next element
        cin >> elem;
    }

    return head;
}

int main() {
    Node *head = takeInput_rec();
    printNodes(head);
    























    /*
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
    */











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
