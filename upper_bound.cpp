#include<bits/stdc++.h>
using namespace std;

int upper_bound(vector<int>arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]>x){
            ans = mid;
            high = mid-1;
        }
        else{
            low= mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {1,2,3,4,4,5,6,7,8,9};
    int n = nums.size();
    int x;
    cout<<"Enter value for x"<<endl;
    cin>>x;
    int upper = upper_bound(nums,n ,x);
    cout<<"upper bound for "<<x<<" is "<<upper<<endl;
    return 0;
}