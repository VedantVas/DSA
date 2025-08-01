#include<bits/stdc++.h>
using namespace std;
// finding the maximum and minimum elements of array
int main(){

    int n;
    cout<<"Numbers of elements in array:"<<endl;
    cin>>n;
    int arr[n];
    int min, max;
    for(int i =0;i<n;i++){
        cout<<"Enter the elements.."<<endl;
        cin>>arr[i];
        if(i==0){
            min = arr[i];
            max = arr[i];
        }
        if(i>=1){
            if(arr[i]>max){
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
    }
    cout<<"maximum value is "<<max<<endl;
    cout<<"Minimum value is "<<min<<endl;

    return 0;
}