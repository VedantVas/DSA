#include<bits/stdc++.h>
using namespace std;
// count of number in array.
int main(){

    int n;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements.."<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the element for the count:"<<endl;
    cin>>num;
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==num){
            count++;
        }
    }
    cout<<"count of "<<num<<" is "<<count<<endl;
    return 0;
}