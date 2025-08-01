#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums1[2] = {1,3};
    int nums2[1] = {2};
    int nums[sizeof(nums1)+sizeof(nums2)];
    for(int i = 0;i<sizeof(nums1);i++){
        nums.push_back(nums1[i]);
    }
    for(int j =0;j<sizeof(nums2);j++){
        nums.push_back(nums2[j]);
    }

    sort(nums.begin(),nums.end());

    for(int i = 0 ;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}