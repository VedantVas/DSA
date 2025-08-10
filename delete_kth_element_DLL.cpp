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

Node* Delete_kth_element(Node* head, int kth){
    if(head==NULL || head->next ==NULL) return NULL;
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        if(cnt==kth) break;
        temp = temp->next;
    }
    Node* back = temp->prev;
    Node* front = temp->next;
    if(back==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(back==NULL){
        front->prev= nullptr;
        head = front;
        temp->next = nullptr;
        delete temp;
        return head;
    }
    else if(front==NULL){
        back->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return head;
    }
    back->next = front;
    front->prev = back;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;

}

int main(){
    vector<int> nums = {1,2,3,4};
    Node* head = ConvertARRtoDLL(nums);
    print(head);
    int kth;
    cout<<"Enter the number of node"<<endl;
    cin>>kth;
    head = Delete_kth_element(head, kth);
    print(head);
    return 0;
}