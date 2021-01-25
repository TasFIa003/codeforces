#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,b=0,c=0;
    cin>>n;
    int a[1000];
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            p=a[i];
            c+=p;
        }
        else
        {
            q=a[i];
            b+=q;
        }
    }

        cout<<b-c<<endl;

}
