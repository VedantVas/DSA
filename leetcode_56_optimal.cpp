#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge_opt(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(ans.empty() || intervals[i][0]> ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> arr = {{1,2},{2,4},{3,5},{1,6},{8,9},{9,10},{12,15}};
    vector<vector<int>> ans = sol.merge_opt((arr));

    int n = ans.size();
    for(int i=0;i<n;i++){
        for(int j = 0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"|";
    }
    return 0;
}