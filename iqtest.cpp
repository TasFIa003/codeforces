#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a[100],counter1=0,counter2=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i]%2!=0)
            counter1++;
        else
            counter2++;
    }
    if(counter2>counter1)
    {
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2!=0)
                cout<<i;
        }
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2==0)
                cout<<i;
        }
    }
}



