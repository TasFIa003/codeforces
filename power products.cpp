#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,k,a[1000],x;
    cin>>n>>k;
    ll counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       // x=a[i];
    }
    ll res,res1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           res=a[i]*a[j];
           res1=a[j]%k;

           // cout<<res<<endl;
            if(res==pow(res1,3))
                counter++;
        }
    }
    cout<<counter<<endl;
}
