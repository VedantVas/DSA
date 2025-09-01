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
int findloop_length(Node *head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            int count = 1;
            slow= slow->next;
            while(slow!=fast){
                slow=slow->next;
                count+=1;
            }
            return count;
        }
    }
    return 0;
}

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

void makeLoop(Node* head, int value) {
    Node* temp = head;
    Node* loopNode = NULL;
    Node* tail = NULL;

    while (temp != NULL) {
        if (temp->data == value) {
            loopNode = temp;
        }
        if (temp->next == NULL) {
            tail = temp;
        }
        temp = temp->next;
    }
    if (tail && loopNode) {
        tail->next = loopNode; // create loop
    }
}


int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    Node* head = convertArr2LL(nums);
    int value;
    cin>>value;
    makeLoop(head,value);
    int ans = findloop_length(head);
    cout<<ans;
    return 0;
}