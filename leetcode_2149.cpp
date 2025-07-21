#include<bits/stdc++.h>
using namespace std;

vector<int> Rearrange_array(vector<int>nums){
    int n = nums.size();
    vector<int> ans(n,0);
    int pos =0, neg = 1;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[neg]= nums[i];
            neg+=2;
        }
        else{
            ans[pos]=nums[i];
            pos+=2;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,-2,-3,4,-3,3};
    vector<int>ans = Rearrange_array(nums);
    int n = ans.size();
    for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}