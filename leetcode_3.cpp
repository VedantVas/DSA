#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int max_len = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            unordered_set <char> seen;
            for(int j=i;j<n;j++){
                char val = s[j];
                if(seen.find(val)!=seen.end()){
                    break;
                }
                else{
                    seen.insert(val);
                    max_len = max(max_len,j-i+1);
                }
            }
        }
        return max_len;
    }
};