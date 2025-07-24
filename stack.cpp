#include<bits/stdc++.h>
using namespace std;

int nums[5] = {};
int topp =-1;

void push(int data){
    int size = sizeof(nums) / sizeof(int); 
    if(topp==size-1){
        cout<<"stack overflow"<<endl;
    }
    else{
        nums[++topp]=data;
    }
}
void pop(){
    if(topp==-1){
        cout<<"stack empty"<<endl;
    }
    else{
        cout<<nums[topp--]<<endl;
    }
}
void display(){
    for(int i =0;i<=topp;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
void top(){
    cout<<nums[topp];
}

int main(){
    
    push(24);
    push(23);
    push(12);
    pop();
    display();
    top();
}