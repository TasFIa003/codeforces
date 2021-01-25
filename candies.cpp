#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x,sum,k;
        for(k=2;;k++)
        {
            sum=pow(2,k)-1;
            if(n%sum==0)
            {
                x=n/sum;
                break;
            }
        }cout<<x<<endl;

    }//cout<<x<<endl;
}
