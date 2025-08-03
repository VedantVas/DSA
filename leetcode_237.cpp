#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    public:
    ListNode(int data1, ListNode* next1){
        val = data1;
        next = next1;
    }
    public:
    ListNode(int data1){
        val= data1;
        next = nullptr;
    }
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;        
    }
};

ListNode* convertArr2LL(vector<int>arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Solution sol;
    vector<int> nums = {2,3,4,5,9};
    ListNode* head = convertArr2LL(nums);
    ListNode* nodetodelete = head->next;
    sol.deleteNode(nodetodelete);
    printList(head);
    return 0;

}