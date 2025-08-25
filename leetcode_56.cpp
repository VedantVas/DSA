#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(!ans.empty() && end<= ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(intervals[j][0]<=end){
                    end = max(end, intervals[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start, end});

        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> arr = {{1,2},{2,4},{3,5},{1,6},{8,9},{9,10},{12,15}};
    vector<vector<int>> ans = sol.merge((arr));

    int n = ans.size();
    for(int i=0;i<n;i++){
        for(int j = 0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"|";
    }
    return 0;
}