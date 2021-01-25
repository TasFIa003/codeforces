#include<iostream>
using namespace std;

int main()
{
    int k,n,w,i,b,sum=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    b=sum-n;
    if(sum<=n)
        cout<<"0";
    else
        cout<<b;
}
