#include<bits/stdc++.h>
using namespace std;
// sum of elements of array 
int main(){

    int n;
    cout<<"Enter the numbers of element:"<<endl;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        cout<<"Enter the elements one by one...."<<endl;
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum of elements of array->"<<sum<<endl;
    return 0;
}