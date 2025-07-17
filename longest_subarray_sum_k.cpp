#include<bits/stdc++.h>
using namespace std;

int longest_subarray_sum_k(vector<int> a, int k){
    map<int,int> presum;
    int sum =0;
    int max_len = 0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum == k){
            max_len = max(max_len,i+1);
        }
        int rem = sum-k;
        if(presum.find(rem)!=presum.end()){
            int len = i - presum[rem];
            max_len = max(max_len,len);
        }
        if(presum.find(sum)==presum.end()){
            presum[sum] = i;
        }
    }
    return max_len;
}

int main(){
    vector <int> a = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int ans = longest_subarray_sum_k(a,k);
    cout<<ans<<endl;
    return 0;
}