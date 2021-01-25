#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mn;
    cin>>n>>m;
    if(n>m)
    {
        mn=m;
    }
    else
    {
        mn=n;
    }

    if((mn)%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else
        cout<<"Akshat"<<endl;
}
