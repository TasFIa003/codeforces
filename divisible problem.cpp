#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a,b,i,counter=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
    }
    if(a/b==0)
    {
        cout<<"0";
    }
    else
    {
        if(a/b!=0)
        {
            a++;

        }
    }cout<<a<<endl;
}
