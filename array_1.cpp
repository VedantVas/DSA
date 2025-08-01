#include<bits/stdc++.h>
using namespace std;
// storing and printing elements fron an array
int main (){

    int n ;
    cout<<"Enter the numbers of element in array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element"<<endl;
        cin>>arr[i];
    }

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}