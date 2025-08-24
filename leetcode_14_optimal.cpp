#include<bits/stdc++.h>
using namespace std;

string LCP(vector<string> strs){
    if(strs.empty()) return 0;

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs[strs.size()-1];
    string prefix = "";

    for(int i = 0;i< min(first.size(), last.size());i++){
        if(first[i]==last[i]){
            prefix+=first[i];
        }
        else break;
    }
    return prefix;
}

int main(){
    vector <string> strs = {"flower","flow","fly"};
    string ans = LCP(strs);
    cout<<ans<<endl;
    return 0;
}