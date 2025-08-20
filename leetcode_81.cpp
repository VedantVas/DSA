#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
                int n = nums.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return true;
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low=low+1;
                high = high-1;
                continue;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }

            }
            else{
                if(nums[mid]<=target && target<=nums[high]){
                    low= mid+1;
                }
                else{
                    high = mid-1;
                }

            }
        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {6,7,1,2,3,3,4,5};
    int target ;
    cin>>target;
    bool ans = sol.search(nums,target);
    cout<<ans<<endl;
    return 0;
}