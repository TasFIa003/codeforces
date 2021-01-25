#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a=1,b,time=0;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b;
        if(a<=b)
            time+=b-a;
        else
            time+=n-a+b;
        a=b;
    }cout<<time<<endl;
}
