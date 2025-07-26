#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i =0;i<n-1;i++){
            for(int j =i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
};

int main(){
    Solution sol;
    vector<vector<int>> matrix = {{1,2,3},{5,6,7},{9,10,11}};
    sol.rotate(matrix);
}