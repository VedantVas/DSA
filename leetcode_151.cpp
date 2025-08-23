#include<bits/stdc++.h>
using namespace std;

string reversewords(string s){
    stringstream ss(s);
    string word;
    vector<string> words;
    while(ss >> word){
        words.push_back(word);
    }
    // all word are in words vector without spaces 
    reverse(words.begin(),words.end());
    //reverse the vector
    string result;
    for(int i=0;i<words.size();i++){
        if(i>0) result+= " ";
        result+=words[i];
    }
    return result;
}
int main(){
    string s;
    getline(cin,s);
    string result = reversewords(s);
    cout<<result<<endl;
    return 0;
}