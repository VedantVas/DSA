#include<bits/stdc++.h>
using namespace std;

vector<int> Rearrange_array_element_var2(vector<int> nums){
    int n = nums.size();
    
    vector<int> pos, neg;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }
    }
    if(pos.size()<neg.size()){
        for(int i =0;i<pos.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1] = neg[i];
        }
        int index = pos.size()*2;
        for(int i =pos.size();i<neg.size();i++){
            nums[index] = neg[i];
            index++;
        }
    }
    else{
         for(int i =0;i<neg.size();i++){
            nums[2*i]=pos[i];
            nums[2*i+1] = neg[i];
        }
        int index = neg.size()*2;
        for(int i =neg.size();i<pos.size();i++){
            nums[index] = pos[i];
            index++;
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {1,2,-5,3,-2,-4,7,2};// number of positives and negatives are not same 
    vector<int>ans = Rearrange_array_element_var2(nums);
    int n = ans.size();
    for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}