#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int recur(vector<int> nums,int low, int high, int target){
        if(low>high){
            return -1; 
        }
        int mid = (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(target>nums[mid]){
            return recur(nums,mid+1,high,target);
        }
        return recur(nums,low,mid-1,target);
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        return recur(nums,low,high,target);
    }
};

int main(){
    Solution sol;
    vector<int> nums = { 1,2,3,4,5,6,7,8,9,10};
    int target;
    cout<<"Enter the value for target"<<endl;
    cin>>target;
    int ans = sol.search(nums,target);
    if(ans==-1)cout<<"Not found..."<<endl;
    else cout<<"The target is at "<<ans+1<<" place"<<endl;
    return 0;
}