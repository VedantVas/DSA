#include<bits/stdc++.h>
using namespace std;

int kadanes_algo(vector<int>arr){
    int n = arr.size();
    int sum = 0, maxi = INT_MIN;
    int start = -1, end = -1;
    for(int i=0;i<n;i++){

        if(sum==0){
            start =i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi = sum;
            end = i;
        }

        if(sum<0){
            sum =0;
        }
    }
    if(maxi<0){
        maxi = 0;
    }
    cout<<start<<" "<<end<<endl;
    return maxi;
}

int main(){

    vector<int> arr = {-2,-3,4,-1,-2,1,5,-1};
    int ans = kadanes_algo(arr);
    cout<<ans<<endl;

    return 0;
}