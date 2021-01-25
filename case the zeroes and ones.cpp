#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,counter=0,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='0')
            counter++;
        else
            cnt++;

    }
    if(counter>cnt)
        cout<<counter-cnt<<endl;
    else if(counter<cnt)
        cout<<cnt-counter<<endl;
    else
        cout<<"0"<<endl;

}
