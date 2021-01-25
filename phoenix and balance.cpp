#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n,t,x,y;
   cin>>t;
   while(t--)
   {
       cin>>n;
       x=pow(2,n);
       y=0;
       for(int i=1;i<n/2;i++)
       {
           x+=(pow(2,i));
       }
       for(int i=n/2;i<n;i++)
       {
           y+=(pow(2,i));
       }
       cout<<x-y<<endl;
   }
}
