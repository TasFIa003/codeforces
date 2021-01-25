#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a1,a2,b1,b2,a,b,c,d;

    cin>>n;
    while(n--)
    {
        cin>>a1>>b1>>a2>>b2;
        if((min(a1,b1)+min(a2,b2))==&&max(a1,b1)&&(max(a1,b1)==max(a2,b2)))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
