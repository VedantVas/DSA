#include<bits/stdc++.h>
using namespace std;

int first(vector<int>& nums, int target , int n){
    int low = 0, high = n-1;
    int fist = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            fist = mid;
            high = mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return fist;
}

int last(vector<int>& nums, int target, int n){
    int low =0, high = n-1;
    int lasst = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            lasst = mid;
            low = mid+1;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return lasst;
}

int count_occurence(vector<int> & nums,int target){
    int n = nums.size();
    int first1 = first(nums,target,n);
    if(first1 == -1){
        return 0;
    }
    int last1 = last(nums,target,n);
    int ans = (last1-first1)+1;
    return ans;
}

int main(){
    
    vector<int> nums = {1,2,3,3,3,3,4,5,6,7};
    int target ;
    cin>>target;
    int ans = count_occurence(nums,target);
    cout<<ans<<endl;
    return 0;
}