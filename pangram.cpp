#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,counter=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }

        for(int i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            counter++;
       }

    if(counter==26)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
