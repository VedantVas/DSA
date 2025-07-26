#include<bits/stdc++.h>
using namespace std;

bool Linear_search(int arr[],int size, int num){
    int n = sizeof(arr)/sizeof(int);
    for(int i =0;i<size;i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}

int longest_consicutive_sequence(int arr[], int size){
   
    int longest = 1;
    for(int i =0;i<size;i++){
        int x = arr[i];
        int cnt = 1;
        while(Linear_search(arr,size,x+1)==true){
            x = x+1;
            cnt = cnt+1;
        }
        longest = max(longest,cnt);
    }
    return longest;
}

int main(){

    int arr[] = {100,104,102,1,4,102,101,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = longest_consicutive_sequence(arr,size);
    cout<<ans<<endl;
    return 0;
}