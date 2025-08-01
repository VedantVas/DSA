#include<bits/stdc++.h>
using namespace std;    
// reverse an array
void reverse1(int arr[],int n){
    int start = 0, end = n-1;

    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

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
    cout<<"Do you want to reverse the array enter 1 and if not enter 0:"<<endl;
    cin>>choice;
    if(choice==1){
        reverse1(arr,n);
        cout<<"Reversed array is.."<<endl;
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    } 
    
    return 0;

}    