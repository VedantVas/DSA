#include<bits/stdc++.h>
using namespace std;

vector<int> Next_permutation2(vector<int> nums){// better solution using STL function
    next_permutation(nums.begin(),nums.end());
    return nums;
}

vector<int> Next_permutation(vector<int>nums){// optimal solution 
    int n = nums.size();
    int index = -1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }
    }
    if(index==-1){
        reverse(nums.begin(),nums.end());
    }
    for(int i=n-1;i>index;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1,nums.end());
    return nums;
}

int main(){
    vector<int>nums = {1,3,2};
    //vector<int>ans = Next_permutation2(nums);//uncomment when needed 
    vector<int>ans = Next_permutation(nums);
    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}