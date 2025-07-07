#include<bits/stdc++.h>
using namespace std;    

//Left rotate an array by one place

int main(){
    int n;
    cout<<"Enter the number of element:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Start entering the elements.."<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int choice;
    cout<<"if you want to left rotate, the array, enter 1, else enter any number :"<<endl;
    cin>>choice;
    if(choice==1){
        int first_val = arr[0];
        for(int i =1;i<=n;i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = first_val;

        cout<<"New Array is: "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"Your Array is: "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}    
