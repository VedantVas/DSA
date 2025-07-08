#include<bits/stdc++.h>
using namespace std;
// Transpose of rows and columns of 2D array
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

    cout<<"Original array"<<endl;
    for(int i =0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            cout<<arr[i][j];
        }
    }
    cout<<endl;
    int transposed[columns][rows];
    for(int i =0;i<rows;i++){
        for(int j = 0;j<columns;j++){
            transposed[j][i] =arr[i][j];
        }
    }

    cout<<"Transposed Array"<<endl;
     for(int i =0;i<columns;i++){
        for(int j = 0;j<rows;j++){
            cout<<transposed[i][j];
        }
    }

    return 0;
}   
