#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,b,x,y,total;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
        cout<<n*a<<endl;
    else
    {
        x=floor(n/m);
        y=n-(m*x);

        total=x*b+min(y*a,b);
        cout<<total;


    }
}
