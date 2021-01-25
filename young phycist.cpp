#include<iostream>
using namespace std;

int main()
{
    int x[100],y[100],z[100],n,x_sum=0,y_sum=0,z_sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int i=0;i<n;i++)
    {
        x_sum+=x[i];
        y_sum+=y[i];
        z_sum+=z[i];
       }
    if(x_sum==0&&y_sum==0&&z_sum==0)
    {
        cout<<"YES";

    }
    else
       {
           cout<<"NO";
       }
}
