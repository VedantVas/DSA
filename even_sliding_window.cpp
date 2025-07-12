#include<bits/stdc++.h>
using namespace std;

 void sliding_window1(int arr[],int k,int n){
    int even =0;
    for(int i=0;i<k;i++){
        if(arr[i]%2==0){
            even++;
        }
    }
    cout<<even<<endl;
    for(int i =k;i<n;i++){
        if(arr[i-k]%2==0){
            even--;
        }
        else if(arr[i]%2==0){
            even++;
        }
        cout<<even<<endl;
    }
 }
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int k = 3;
    sliding_window1(arr,k,n);

}