#include<bits/stdc++.h>
using namespace std;

int first_occur(vector<int>nums, int target, int n){
    int low = 0,high = n-1;
    int first = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            first = mid;
            high = mid-1;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return first;
}
int last_occur(vector<int>nums, int target, int n){
    int  low= 0, high = n-1;
    int last = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target){
            last = mid;
            low = mid+1;
        }
        else if(nums[mid]<target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return last;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = first_occur(nums, target, n);
        if(first==-1)return {-1,-1};
        int last = last_occur(nums, target, n);
        return {first, last};
    }
};

int main(){
    Solution sol;
    vector<int>nums = {1,2,3,4,4,4,5,6,7,8,9};
    int target = 4;
    vector<int> ans = sol.searchRange(nums, target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}