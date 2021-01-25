#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,red=0,blue=0;
    cin>>n>>m;
    int i=0;
    while(1)
    {
        red+=n*2;
        blue+=(n-1);
        if(n<0)
            break;
            i++;
    }
    cout<<i;
}
