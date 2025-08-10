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
 
Node* delete_head_DLL(Node* head){
    if(head == NULL || head->next==NULL) return NULL;
    Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

int main(){
    vector<int> nums = {1,2,3,4};
    Node* head = ConvertARRtoDLL(nums);
    print(head);
    head = delete_head_DLL(head);
    print(head);
    return 0;
}