#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k =0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[k++]=nums[i];
                cout<<nums[k-1]<<" ";
            }
        }
        cout<<endl;
        return k;
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