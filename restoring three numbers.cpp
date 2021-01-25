#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x[1000],a,b,c;

    vector<ll>v;
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
        v.push_back(x[i]);
    }
    sort(v.begin(),v.end());
    /*for(auto itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*(itr)<<endl;

    }*/
    a=v[3]-v[1];
    b=v[3]-v[2];
    c=v[3]-v[0];
    cout<<a<<" "<<b<<" "<<c<<endl;

}
