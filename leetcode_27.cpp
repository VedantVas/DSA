#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {// brute force approach
        int n = nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                continue;
            }
            else{
                ans.push_back(nums[i]);
            }  
        }
        int x = ans.size();
        for(int j=0;j<x;j++){
            nums[j]=ans[j];
            cout<<nums[j]<<" ";
        }
        cout<<endl;
        return x;
    }
};

int main(){
    Solution sol;
    vector<int>nums = {1,2,3,4,2,2,6,7};
    int val = 2;
    int ans = sol.removeElement(nums,val);
    cout<<ans<<endl;
    return 0;
}
