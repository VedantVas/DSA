#include<bits/stdc++.h>
using namespace std;

void print_row(int row){
    int ans = 1;
    cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans = ans*(row-i);
        ans = ans/i;
        cout<<ans<<" ";
    }
}

int main(){
    int row;
    cout<<"Enter the row number"<<endl;
    cin>>row;
    print_row(row);

    return 0;
}