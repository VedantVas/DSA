#include<bits/stdc++.h>
using namespace std;
//using class in place of struct to bring the features of oops, i.e
// object oriented programming , there will be no change in the working, nor any error
class Node{//self defined data structure 
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){//concept of multiple pointers
        data = data1;
        next = nullptr;
    }
};

int main(){

    vector <int> arr={2,34,7,3,2};
    Node* y = new Node(arr[0]);// calling pointer 2
    //Node* y = new Node(arr[0],nullptr);//calling pointer 1
    cout<<y->data<<endl;
    return 0;
}