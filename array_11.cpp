#include<bits/stdc++.h>
using namespace std;
// sum of row's amd column's elements of 2D array
int main(){

    int rows, columns;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    cout<<"Enter the number of columns"<<endl;
    cin>>columns;
    int arr[rows][columns];
    cout<<"Start entering the elements"<<endl;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Sum of row's elements"<<endl;
    for(int i =0;i<rows;i++){
        int sum_rows = 0;
        for(int j = 0;j<columns;j++){
            sum_rows += arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" row is "<<sum_rows<<endl;
    }
    cout<<endl;

    cout<<"Sum of column's element"<<endl;
    for(int j = 0;j<columns;j++){
        int column_sum = 0;
        for(int i =0;i<rows;i++){
            column_sum += arr[i][j];
        }
        cout<<"Sum of "<<j+1<<" column is "<<column_sum<<endl;
    }
    cout<<endl;

    return 0;

}   