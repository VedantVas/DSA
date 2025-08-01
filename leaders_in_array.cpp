#include<bits/stdc++.h>
using namespace std;

vector<int> Leaders_in_array1(vector<int>nums){//brute force approach
    int n= nums.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        bool leaders = true;
        for(int j=i+1;j<n;j++){
            if(nums[j]>nums[i]){
                leaders =false;
                break;
            }
        }
        if(leaders==true) ans.push_back(nums[i]);
    }
    return ans;
}

vector<int> Leaders_in_array2(vector<int>nums){//optimal approach
    int n=nums.size();
    vector<int>ans;
    int maxi = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi = max(maxi , nums[i]);
    }
    return ans;
    
}

int main(){

    vector<int>arr = {10,22,12,3,0,6};
    //vector<int>ans = Leaders_in_array1(arr);//uncomment when wanted to use brute force 
    vector<int>ans = Leaders_in_array2(arr);//optimal function call
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}