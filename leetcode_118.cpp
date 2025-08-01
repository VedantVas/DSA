#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>generaterow(int row){
        long long ans =1;
        vector<int>ansrow;
        ansrow.push_back(1);
        for(int col =1;col<row;col++){
            ans = ans*(row-col);
            ans = ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int row_num;
    cout<<"Enter the number of rows"<<endl;
    cin>>row_num;
    vector<vector<int>> ans = sol.generate(row_num);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}