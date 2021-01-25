#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,doller=0;
   cin>>n;
   if(n/100)
   {
    doller+=n/100;
    n-=(n/100)*100;
   }
   if(n/20)
   {
       doller+=n/20;
    n-=(n/20)*20;
   }
   if(n/10)
   {
       doller+=n/10;
    n-=(n/10)*10;
   }
   if(n/5)
   {
       doller+=n/5;
    n-=(n/5)*5;
   }
   if(n)
   {
       doller+=n;
    n-=n;
   }
   cout<<doller<<endl;

}
