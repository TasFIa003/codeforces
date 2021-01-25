#include<iostream>
using namespace std;

int main()
{
    int p,n,q,x[100],y[100],z[100],j;
    cin>>n>>p;
    for(int i=0;i<p;i++)
        {
            cin>>x[i];
            j=x[i];
            z[j]=1;

        }
        cin>>q;
        for(int i=0;i<q;i++)
        {
            cin>>y[i];
            j=y[i];
            z[j]=1;

        }
        int counter=0;
        for(int i=0;i<=n;i++)
        {
           if(z[i]==1)
            counter++;

        }
        if(counter==n)
        {
            cout<<"I become the guy.";
        }
        else
            cout<<"Oh, my keyboard!";

}
