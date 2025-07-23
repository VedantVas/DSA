#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
                
            } 

        }
        return false;
}

int main(){

    vector<int>arr = {1,2,3,4,5,6,7,8,9,8};
    bool ans = containsDuplicate(arr);
    if(ans==1)cout<<"it contains duplicate"<<endl;
    else cout<<"It does not contain duplicate"<<endl;
    return 0;
}