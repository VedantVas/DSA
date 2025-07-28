#include<bits/stdc++.h>
using namespace std;
// find the value at any given row and columns of pascal's triangle
int nCr(int n, int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}

int main(){
    int row , column;
    cout<<"Enter the row and columns number separated by space"<<endl;
    cin>>row>>column;
    int ans = nCr(row-1,column-1);
    cout<<"The value is "<<ans<<endl;
    return 0;
}