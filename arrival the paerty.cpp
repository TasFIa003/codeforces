#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,a=0,cnt=0;
    cin>>n>>k;
   int res=240-k;
        for( i=1;i<=n;i++)
        {
            a+=5*i;
            if(a>res)
                break;
            else
            cnt++;
        }

    cout<<cnt;
}
