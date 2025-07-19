#include<bits/stdc++.h>
using namespace std;

vector<int> Plus_one_opt(vector<int>arr){//optimal solution for bigger arrays
    int n = arr.size();
    for(int i=n-1;i>=0;i--){
        if(arr[i]<9){
            arr[i]++;
            return arr;
        }
        arr[i]=0;
    }
    arr.insert(arr.begin(),1);
    return arr;
}

vector<int> Plus_one(vector<int> arr){//brute force solution 
    int num=0;
    int n = arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        num = num*10 + arr[i];
    }
    num = num+1;
    
    string s = to_string(num);

    for (char ch : s) {
        int digit = ch - '0'; // convert char to int
        ans.push_back(digit);
    }
    return ans;
}
int main(){
    vector <int> arr = {1,9,0,9,1,2,3,1,4,6,3,9};
    vector<int>ans = Plus_one_opt(arr);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}