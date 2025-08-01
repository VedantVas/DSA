#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string str = "hello";
    unordered_map<char,int> freq;
    for(char ch: str){
        freq[ch]++;
    }
    for(auto data :freq){
        cout<<data.first<<data.second<<endl;
    }
    return 0;
}