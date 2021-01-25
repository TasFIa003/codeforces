#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,n,total=0 ;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       int a[10000],sum=0,l=-1;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a%x==0)
            {
                if(l==-1)
                    l=i;

            }
        }


}

}
