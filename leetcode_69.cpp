#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int ans = (int)(sqrt(x));
        return ans;
    }
};

int main(){
    Solution sol;
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int ans = sol.mySqrt(num);
    cout<<ans<<endl;
    return 0;
}