#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) low = mid+1;
            else high = mid -1;
        }
        return -1;
    }
};

int main(){

    Solution sol;
    vector<int> nums = {1,2,3,6,7,8,11,12};
    int target;
    cout<<"Enter the number for search"<<endl;
    cin>>target;
    int ans = sol.search(nums, target);
    if(ans==-1)cout<<"not found"<<endl;
    else cout<<"Target is at "<<ans+1<<" place"<<endl;
    return 0;
}