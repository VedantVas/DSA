#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* removeHead(Node* head){
    if(head==NULL)return head;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
Node* convertARRtoLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;

    }
    return head;

}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    Node* head = convertARRtoLL(nums);
    print(head);
    head = removeHead(head);
    print(head);
    return 0;
}