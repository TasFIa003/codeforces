#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n==1 || m==1)
            cout<<"YES"<<endl;
        else if(n==2 && m==2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
