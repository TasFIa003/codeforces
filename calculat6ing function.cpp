#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,sum;
    cin>>n;
    if(n%2==0)
    {

        cout<<n/2;
    }
    else
    {
        sum=((n+1)/2)-(n+1);
        cout<<sum;
    }
}
