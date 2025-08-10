#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;


    public:
    Node(int data1, Node* next1,Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* ConvertARRtoDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node*temp = new Node(arr[i],nullptr,prev);
        prev->next= temp;
        prev = temp; 

    }
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

Node* Delete_node_withval(Node* head, int val){
    if(head==NULL ) return NULL;
    if(head->data==val){
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        else{
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            temp->next = nullptr;
            delete temp;
            return head;
        }
    }
    Node*temp = head;
    while(temp!=NULL){
        temp= temp->next;
        if(temp->data==val){
            Node* back = temp->prev;
            Node* front = temp->next;
            back->next = front;
            front->prev = back;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            return head;
        }
    }
}

int main(){
    vector<int> nums = {1,22,31,49};
    Node* head = ConvertARRtoDLL(nums);
    print(head);
    int val;
    cout<<"Enter the data of node"<<endl;
    cin>>val;
    head = Delete_node_withval(head, val);
    print(head);
    return 0;
}