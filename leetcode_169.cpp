#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int> arr){
    int cnt =0;
    int el;
    for(int i=0;i<arr.size();i++){
        if(cnt==0){
            cnt=1;
            el = arr[i];
        }
        else if(el ==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
        int cnt1 =0;
        for(int i =0;i<arr.size();i++){
            if(arr[i]==el){
                cnt1++;
            }
        }
        if(cnt1>(arr.size()/2)) return el;
        return -1;
    }
}

int main(){
    vector<int> arr ={2,2,3,4,2,2,2,2,2,1,1,1,2,1,1};
    cout<<arr.size()<<endl;
    int ans = majority_element(arr);
    cout<<ans<<endl;
    return 0;
}