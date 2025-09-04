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

class Solution {
public:
    Node* oddEvenList(Node* head) {
        if(head==NULL || head->next ==NULL) return head;
        vector<int> nums;
        Node* temp = head;
        while(temp!=NULL && temp->next!=NULL){
            nums.push_back(temp->data);
            temp = temp->next->next;
        }
        if(temp) nums.push_back(temp->data);
        temp = head->next;
        while(temp!=NULL && temp->next!=NULL){
            nums.push_back(temp->data);
            temp= temp->next->next;
        }
        if(temp) nums.push_back(temp->data);
        temp = head;
        int i = 0;
        while(temp!=NULL){
            temp->data = nums[i];
            i +=1;
            temp = temp->next;
        }
        return head;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6};
    Node* head = convertArr2LL(nums);
    printList(head);
    head = sol.oddEvenList(head);
    printList(head);
    return 0;
}