#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> arr, int n,int x){
    int low= 0,high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
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

class Solution {
public:
    vector<int> searchRange_lower_upper(vector<int>& nums, int target) {
        int n = nums.size();
        int first = lower_bound(nums, n, target);
        if(first == n || nums[first]!= target) return {-1,-1};
        int last = upper_bound(nums, n, target)-1;
        return {first, last};
    }
};

int main(){
    Solution sol;
    vector<int>nums = {1,2,3,4,4,4,5,6,7,8,9};
    int target = 4;
    vector<int> ans = sol.searchRange_lower_upper(nums, target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}
