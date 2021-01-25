#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,a,b,t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cin>>x>>y>>a>>b;
        int dis_i=fabs(x-y);
        int sum_f=a+b;
        if(dis_i%sum_f==0)
        {
            int res=dis_i/sum_f;
            cout<<res<<endl;
        }
        else
            cout<<"-1"<<endl;
    }

}
