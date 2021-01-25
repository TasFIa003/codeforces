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
        long long a[n],cnt=0,cnt1=0,cnt2=0,cnt3=0;
        for(int i=0; i<=n-1; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<=n-1; i++)
        {
            if((i%2)==1 && (a[i]%2)==0)
                cnt++;
            if((i%2)==0 && (a[i]%2)==1)
                cnt1++;
            if((a[i]%2)==1)
                cnt2++;
             if((a[i]%2)==0)
                cnt3++;

        }
            //long long r=n/2;
                if(n%2==1){
                       long long r=n/2;
                    if(cnt2!=r)
                    {cout<<"-1"<<endl;
                    continue;
                    }
                }
                if(n%2==0)
                {
                     long long r=n/2;
                    if(cnt3!=r)
                      {cout<<"-1"<<endl;
                    continue;
                    }
                }

            cout<<min(cnt,cnt1)<<endl;

    }

}


