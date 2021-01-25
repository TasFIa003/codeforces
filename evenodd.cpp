#include<iostream>
using namespace std;

int main()
{
    long long n,k,i;
    cin>>n>>k;
   i=(n+1)/2;
   if(k<=i)
   {
       cout<<k*2-1<<endl;
   }
   else
    cout<<(k-i)*2<<endl;
}
