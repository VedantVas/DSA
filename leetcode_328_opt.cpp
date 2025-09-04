#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1 ){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* oddEvenList(Node* head) {
        if(head==NULL || head->next==NULL) return head;
        Node* odd = head;
        Node* even = head->next;
        Node* evenhead = head->next;
        while(even!=NULL && even->next!=NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        return head;
}


int main(){

    vector<int> nums = {1,2,3,4,5,6};
    Node* head = convertArr2LL(nums);
    printList(head);
    head = oddEvenList(head);
    printList(head);
    return 0;
}
