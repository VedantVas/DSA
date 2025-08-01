#include<bits/stdc++.h>
using namespace std;
int sliding_window(int arr[],int k,int n){
    int window_sum = 0;
    int maxi = 0;
    for(int i = 0;i<k;i++){
        window_sum +=arr[i];
    }
    maxi = window_sum;
    for(int i = k;i<n;i++){
        window_sum+=arr[i]-arr[i-k];
        maxi = max(window_sum, maxi);
    }
    return maxi;
}
int main (){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int k ;
    cout<<"enter the value for K"<<endl;
    cin>>k;
    int n= sizeof(arr)/sizeof(int);
    /*cout<<n<<"it is value of n"<<endl;
    int sum_max = INT_MIN;
    for(int i = 0;i<=n-k;i++){
        int sum = 0;
        for(int j = i;j<i+k;j++){
            sum = sum + arr[j];
           
            }
            sum_max = max(sum,sum_max);
        }
    cout<<sum_max<<endl;*/
    int a = sliding_window(arr,k,n);
    cout<<a<<endl;
    return 0;
}
