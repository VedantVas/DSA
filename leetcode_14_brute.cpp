#include<bits/stdc++.h>
using namespace std;

string longestcommonprefix(vector<string> strs){
    if(strs.empty()) return "";

    string prefix = "";

    for(int i=0;i<strs[0].size();i++){
        char ch = strs[0][i];

        for(int j=1;j<strs.size();j++){
            if(i>=strs[j].size() || strs[j][i]!=ch){
                return prefix;
            }
        }
        prefix+=ch;
    }
    return prefix;
}

int main(){
    vector <string> strs = {"flower","flow","fly"};
    string ans = longestcommonprefix(strs);
    cout<<ans<<endl;
    return 0;
}