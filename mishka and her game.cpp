#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,m[10000],c[10000];
    ll sum1=0,sum2=0;
    cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>m[i]>>c[i];

       if(m[i]>c[i])
        sum1++;
       else if(m[i]<c[i])
        sum2++;
   }
    if(sum1>sum2)
        cout<<"Mishka"<<endl;
    else if(sum1<sum2)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

}
