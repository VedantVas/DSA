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

bool check_palindrome(Node* head){
    Node* temp = head;
    stack<int> st;
    while(temp!=NULL){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        if(st.top()!=temp->data){
            return false;
        }
        temp= temp->next;
        st.pop();
    }
    return true;
}

int main(){
    vector<int> nums = {1,2,3,0,2,1};
    Node* head = convertArr2LL(nums);
    bool ans = check_palindrome(head);
    cout<<ans;
    return 0;
}