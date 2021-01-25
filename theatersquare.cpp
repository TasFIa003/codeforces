#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,k,l;
    cin>>n>>m>>a;

   if(n%a==0)
   {
       l=n/a;
   }
   else
   {
       l=(n/a)+1;
   }
   if(m%a==0)
   {
       k=m/a;
   }
   else
   {
       k=(m/a)+1;
   }
    long long total=l*k;
    cout<<total;
}
