#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right
            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            top++;

            // Traverse downwards
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            // Traverse from right to left (only if row remains)
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }

            // Traverse upwards (only if column remains)
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }

        return result;
    }
};


int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int> result = sol.spiralOrder(matrix);
    for (int num : result) cout << num << " ";
    return 0;
}
