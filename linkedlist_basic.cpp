#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
// Function to add the first node
void addFirst(Node* &head, Node* &tail, int value) {
    head = new Node(value);
    tail = head;  // Both head and tail point to first node
}

void addNext(Node* &tail, int value) {
    Node* newNode = new Node(value);
    tail->next = newNode;
    tail = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main(){

    Node* head = nullptr;
    Node* tail = nullptr;

    // Step 1: Add first node
    addFirst(head, tail, 10);

    // Step 2: Add more nodes
    addNext(tail, 20);
    addNext(tail, 30);
    addNext(tail, 40);

    // Step 3: Print the list
    printList(head);

    return 0;

}