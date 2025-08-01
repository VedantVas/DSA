#include<bits/stdc++.h>
using namespace std;
//linear search in array
int main(){

    int n;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements.."<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the element that you want to search:"<<endl;
    cin>>search;
    for(int i = 0;i<n;i++){
        if(arr[i]==search){
        cout<<"The elements is at index: "<<i<<endl;
        break;
        }
    }
    cout<<"This element is not in the array."<<endl;

    return 0;
}