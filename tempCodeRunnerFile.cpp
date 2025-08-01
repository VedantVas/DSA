#include<bits/stdc++.h>
using namespace std;

bool check_sorted(int arr[],int i,int j,int n){

    if(j>=n){
        return true;
    }

    if(arr[i]>arr[j]){
        return false;
    }
    return check_sorted(arr,i+1,j+1,n);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0])-1;
    int ans = check_sorted(arr,0,1,n);
    cout<<ans;
    return 0;
}