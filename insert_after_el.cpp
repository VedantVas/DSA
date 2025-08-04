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

Node* insert_node_after(Node* head, int el, int val){
    if(head==NULL)return new Node(val);
    if(head->data==el){
        if(head->next==nullptr){
            Node* temp = new Node(val);
            head->next =temp;
            return head;
        }
        else{
            Node* temp=new Node(val);
            temp->next = head->next;
            head->next = temp;
            return head;
        }

    }
    Node* temp =head;
    while(temp!=NULL){
        if(temp->data==el){
            Node* node =new Node(val);
            node->next = temp->next;
            temp->next = node;
            break;
        }
        temp= temp->next;
    }
    return head;

}
int main(){
    vector<int> nums = {1,2,3,4,5,6};
    Node* head = convertARRtoLL(nums);
    print(head);
    int el;
    cout<<"enter the element of the node"<<endl;
    cin>>el;
    int val;
    cout<<"Enter the value for the node"<<endl;
    cin>>val;
    head =insert_node_after(head,el, val);
    print(head);
    return 0;
}