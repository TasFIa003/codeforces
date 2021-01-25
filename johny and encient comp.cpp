#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        long long cnt=0;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0"<<endl;
            continue;
        }
        else{
        if(a>b)
           {
               swap(a,b);
           }
        while(a<b)
        {
            a*=8;
            if(a<=b)
               {
                cnt++;

               }
               else
               {
                   a/=8;
                   break;
               }

        }
         while(a<b)
        {
            a*=4;
            if(a<=b)
               {
                cnt++;

               }
               else
               {
                   a/=4;
                   break;
               }

        }
         while(a<b)
        {
            a*=2;
            if(a<=b)
               {
                cnt++;

               }
               else
               {
                   a/=2;
                   break;
               }

        }
        if(a==b)cout<<cnt<<endl;
        else
            cout<<"-1"<<endl;
    }
    }
}



