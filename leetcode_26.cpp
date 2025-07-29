#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int it = 1;

    for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]){
            nums[it++]=nums[i];
        }
    } 

    for(int j =0;j<it;j++){
        cout<<nums[j]<<" ";
    }
    cout<<endl;
    return it;  
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,2,21,11,3,2,1,5,6,7};
    int ans  = sol.removeDuplicates(nums);
    cout<<ans<<endl;
    return 0;
}