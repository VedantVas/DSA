#include<bits/stdc++.h>
using namespace std;

string removeouterparenthesis(string s){
    string result = "";
    int balance = 0;
    for(char c : s){
        if(c == '('){
            if(balance > 0) result +=c;
            balance++;
        }
        else{//c==")"
            balance--;
            if(balance > 0)result += c;
        }
    }
    return result;
}

int main(){
    string s;
    cin>>s;
    string result = removeouterparenthesis(s);
    cout<<result<<endl;
    return 0;
}