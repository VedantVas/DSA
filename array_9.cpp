#include<bits/stdc++.h>
using namespace std;    

//Left rotate an array by k places

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
        int k;
        cout<<"Enter the number of rotations "<<endl;
        cin>>k;
        k = k%n;
        int arr1[k];
        for(int i=0;i<k;i++){
            arr1[i]=arr[i];
        }
        for(int j=)
    }

}    