#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,counter=0;
    cin>>n;
    while(n>0)
    {
        if(n%2==1)
            counter++;
            n=n/2;

    }

    cout<<counter;

}
