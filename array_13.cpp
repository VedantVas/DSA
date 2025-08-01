#include<bits/stdc++.h>
using namespace std;
// Searching element in a 2D array
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
    int num;
    cout<<"Enter the element that you want to search"<<endl;
    cin>>num;
    int count = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]==num){
                cout<<"It is at row "<<i+1<<" and "<<j+1<<" column."<<endl;
                
                break;
            }
            else{
                count++;
            }
            
        }

    }
    if(count==rows*columns){
        cout<<"It is not in array"<<endl;
    }
    return 0;

}   