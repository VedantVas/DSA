#include<bits/stdc++.h>
using namespace std;
//brute force solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int sum_max = INT_MIN;
        for(int i = 0;i<n;i++){
            int sum = 0;
            for(int j = i;j<n;j++){
                sum = sum + nums[j];
                sum_max = max(sum,sum_max);
            }
        }
        return sum_max;
    }
};

//optimal approach using kadens method 1
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int curr_sum = 0;
        int sum_max = nums[0];
        for(int i = 0;i<n;i++){
            curr_sum = max(nums[i],curr_sum+nums[i]);
            sum_max = max(sum_max,curr_sum);
        }
        return sum_max;   
    }
};
//optimal approach kaden's method 2
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int curr_sum = 0;
        int sum_max = nums[0];
        for(int i = 0;i<n;i++){
            curr_sum+=nums[i];
            sum_max = max(sum_max,curr_sum);
            if(curr_sum<0){
                curr_sum =0;
            }
        }
        return sum_max;   
    }
};