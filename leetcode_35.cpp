#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = n;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target;
    cout<<"Enter the target value"<<endl;
    cin>>target;
    int ans = sol.searchInsert(nums, target);
    cout<<ans<<endl;
    return 0;
}