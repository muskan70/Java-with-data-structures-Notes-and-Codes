#include <iostream>
using namespace std;
#include "Node.h"

// O(n^2)
Node* takeInput() {
    int data;
    cin >> data;

    Node *head = NULL;

    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
        }
        else {
            Node *temp = head;
            while(temp -> next != NULL) {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        cin >> data;
    }
    
    return head;

}

// O(n)
Node* takeInputBetter() {
    int data;
    cin >> data;

    Node *head = NULL, *tail = NULL;

    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = newNode;

            //tail = tail -> next;
        }
        cin >> data;
    }
    
    return head;

}

void print(Node *head) {
    while(head != NULL) {
        cout << head -> data << " -> ";
        head = head -> next;
    }
    cout << endl;
    
}

Node* deleteNode(Node *head, int i) {
    int count = 0;
    Node *temp = head;
    if(i == 0) {
        Node *n = head;
        head = head -> next;
        delete n;
        return head;
    }
    while(temp != NULL) {
        if(count == i - 1) {
            Node *n = temp -> next;
            if(temp -> next != NULL) {
                temp -> next = temp -> next -> next;
                delete n;
            }
            return head;
        }
        else {
            temp = temp -> next;
            count++;
        }
    }
    return head;
}



int main() {
    Node *head = takeInput();
    print(head);
 //   print(head);
    int i;
    cin >> i;
    head = deleteNode(head, i);
    print(head);








}

