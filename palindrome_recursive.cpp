#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s, int i, int j){
   
    if(i>=j){
        return true;
    }
        if(s[i]!=s[j]){
            return false;
    
        }
        return palindrome(s,i+1,j-1);
}
    


int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int n = s.length();
    int left = 0,right = n-1;
    bool ans = palindrome(s,left,right);
    cout<<ans;  
}