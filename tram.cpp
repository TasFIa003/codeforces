#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,m=0,p=0;
    cin>>x;
    while(x--)
    {
        int a,b;
        cin>>a>>b;

        p-=a;
        p+=b;
        if(p>m)
        {
            m=p;
        }

    }
    cout<<m;

}

