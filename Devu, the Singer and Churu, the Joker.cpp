#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,t[n],sum=0;
    cin>>n>>d;

     for(int i=0;i<n;i++)
        {
            //sum=0;
            cin>>t[i];
               //sum=0;
           //sum+=t[i];

        }
         for(int i=0;i<n;i++)
        {
            //sum=0;
            //cin>>t[i];
               //sum=0;
            sum+=t[i];

        }
        cout<<sum<<endl;
        int to=sum+((n-1)*10);
        cout<<to<<endl;

        if(to>d)
        {
            cout<<-1<<endl;
        }
        else{
           cout<<(d-sum)/5<<endl;
        }
}
