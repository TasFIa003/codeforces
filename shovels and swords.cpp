#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s1=0,s2=0;
    cin>>t;
    while(t--)
    {
            int a,b;
            cin>>a>>b;
           cout<<min((a+b)/3,min(a,b))<<endl;

    }
}
