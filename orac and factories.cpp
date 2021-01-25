#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,k,r=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;

            if(n%2==0)
            {
                   cout<<n+2*k<<endl;
                   continue;
               }

            for(int i=n;i>=2;i--){
                    {
                        if(n%i==0)
                            r=i;
                           //cout<<n+r+2*(k-1)<<endl;
                              //continue;
                    }
            }
                     cout<<n+r+2*(k-1)<<endl;


    }

}

