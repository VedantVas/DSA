#include<bits/stdc++.h>
using namespace std;    

//Check whether array is sorted or not

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
    cout<<"if you want to check array is sorted or not, enter 1, else enter any number :"<<endl;
    cin>>choice;
    if(choice==1){
        int count=0;
        for(int i = 1;i<n;i++){
            if(arr[i-1]>arr[i]){
                count++;
            }       
        }
        if(count>0){
            cout<<"It is not sorted"<<endl;
        }
        else{
            cout<<"It is sorted."<<endl;
        }  
    }    

    return 0;
}    