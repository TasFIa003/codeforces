#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;

    int counter=0;
    int l=a.length();
    for(int i=0;i<l;i++)
    {

        if(a[i]>=65&&a[i]<=90)
            counter++;
    }
    if(counter==l-1)
    {
        for(int i=0;i<l;i++ )
        {
            if(a[i]>=65&&a[i]<=90)
            {
                a[i]=a[i]+32;
            }
            else
            {
                a[i]-=32;
            }

        }

    }
   cout<<a;
}
