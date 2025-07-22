#include<bits/stdc++.h>
using namespace std;

vector<int> Add_two_array(vector<int>arr1,vector<int>arr2){
    vector<int>ans;
    int n = arr1.size();
    
    int rem = 0;
    for(int i=0;i<n;i++){
        int sum = arr1[i]+arr2[i]+rem;
        int k = sum%10;
        rem = sum/10;
        ans.push_back(k);
    }
    ans[n-1] = arr1[n-1]+arr2[n-1]+rem;
    return ans;
}

int main(){
    vector<int> arr1 = {11,8,1};
    vector<int> arr2 = {2,1,9};
    vector<int> ans = Add_two_array(arr1,arr2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}