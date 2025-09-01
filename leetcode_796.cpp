#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;

        string Double = s+s;
        return Double.find(goal) != string::npos;
    }
};

int main(){
    Solution sol;
    string s;
    cin>>s;
    string goal;
    cin>>goal;
    bool ans = sol.rotateString(s, goal);
    cout<<ans;
    return 0;
}