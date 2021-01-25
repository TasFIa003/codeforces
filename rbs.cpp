#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){

    int n,flag=0;
    string s;
    cin>>n;
    vector<string>v;
    while(n--){
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'&&s[i+1]=='?'){
                 // cout<<"YES"<<endl;
                 flag=1;
            }
        }


       // v.push_back(s);
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   /* for(auto i=v.begin();i!=v.end();i++){
        if(*i=="()"|| *i=="(())()"|| *i=="(()(()))"){
            cout<<"YES"<<endl;
        }else{
        cout<<"NO"<<endl;}*/




}
