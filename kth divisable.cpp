#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   vector<ll>v;
    ll n,k,t;
    cin>>t;
   for(int i=0;i<=100;i++)
   {
       //cout<<i<<endl;
        v.push_back(i);
   }
    for(auto itr=v.begin();itr!=v.end();itr++)
    {
        //cout<<*itr<<endl;
        while(t--){
                cin>>n>>k;
        if(*itr%n!=0)
            cout<<(*itr+k)<<endl;
        }
    }
}
