#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r,g,b,small ,big;
    cin>>n;
    while(n--)
    {
        cin>>r>>g>>b;
        if(r>b && r>g)
        {
            small=b+g;
            big=r;
        }
        else if(b>r && b>g)
        {
            small=r+g;
            big=b;
        }
        else
        {
            small=b+r;
            big=g;
        }
        if(big<=small)
            cout<<(big+small)/2<<endl;
        else
            cout<<small<<endl;

    }
}
