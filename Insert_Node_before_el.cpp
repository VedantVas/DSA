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
Node* node_before_el(Node* head, int el, int val){
    if(head ==NULL) return NULL;
    if(head->data == el){
        Node* temp = new Node(val);
        temp->next = head;
        return temp;
    }
    Node*temp = head;
    while(temp!=NULL){
        if(temp->next->data==el){
            Node* node = new Node(val);
            node->next = temp->next;
            temp->next = node;
            break;
        }
        temp = temp->next;
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
    head =node_before_el(head,el, val);
    print(head);
    return 0;
}