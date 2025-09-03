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

Node* reverseLinkedList(Node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front ->next = head;
    head->next = NULL;
    return newHead;
}

bool check_palindrome_opt(Node* head){
        Node* slow = head;
        Node* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* newHead = reverseLinkedList(slow->next);
        Node* first = head;
        Node* second = newHead;
        while(second!=NULL){
            if(first->data!=second->data){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLinkedList(newHead);
        return true;    
}

int main(){
    vector<int> nums = {1,2,3,2,1};
    Node* head = convertArr2LL(nums);
    bool ans = check_palindrome_opt(head);
    cout<<ans;
    return 0;
}