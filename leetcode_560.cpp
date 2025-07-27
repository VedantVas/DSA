#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        int presum = 0 , cnt = 0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            presum += nums[i];
            int remove = presum - k;
            cnt+= mpp[remove];
            mpp[presum] +=1;
        }
        return cnt;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    int ans = sol.subarraySum(nums,k);
    cout<<ans<<endl;
    return 0;
}