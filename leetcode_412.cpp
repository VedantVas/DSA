#include<bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n) {
        vector <string> fizzbuzz(n);
        for(int i=1;i<=n;i++){
            if(i%3==0 and i%5==0){
                fizzbuzz[i-1] = "FizzBuzz";
            }
            else if(i%3==0){
                fizzbuzz[i-1]="Fizz";
            }
            else if(i%5==0){
                fizzbuzz[i-1]="Buzz";
            }
            else{
                fizzbuzz[i-1]=to_string(i);
            }
        }
        return fizzbuzz;
        
}

int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    vector<string> ans = fizzBuzz(num);
    int n = ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}