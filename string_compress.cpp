#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abbccab";
    
    int n = s.size();
    string result = "";
    int count = 1;
    for(int i=0;i<n-1;i++){
        
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            result +=s[i]+to_string(count);
            count=1;
        }
    }
    result +=s.back();
    result+=to_string(count);
    cout<<"answer"<<" ";
    cout<<result<<endl;
    return 0;
}