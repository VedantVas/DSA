#include<bits/stdc++.h>
using namespace std;

struct Node{//self defined data structure 
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};


int main(){
    vector <int> arr = {2,5,3,2};
    //Node* y = new Node(arr[0],nullptr);// this will create 1st node with value 2
    Node y = Node(arr[0],nullptr);//comment this line if you uncomment the commented lines 
    cout<<y.data<<endl;//include this too
    cout<<y.next<<endl;// this also
    //cout<<y->next<<endl;
    //cout<<y->data<<endl;
    return 0;
}