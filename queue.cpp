#include<bits/stdc++.h>
using namespace std;

int arr[5]={};
int rear=-1;
int front = 0;

void eq(int data){
    int n = sizeof(arr)/sizeof(int);
    if(rear==n-1){
        cout<<"No space int he queue"<<endl;
    }
    else{
        arr[++rear]=data;
    }
}

void nq(){
    if(rear==-1){
        cout<<"No element in the queue "<<endl;
    }
    else{
        cout<<arr[front++]<<endl;
    }
}

void display(){
    if(rear==-1){
        cout<<"There's nothing to display"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    eq(12);
    eq(11);
    eq(25);
    display();
    nq();
    display();
    return 0;
}