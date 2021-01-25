#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k[100],counter=0,counter1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    for(int i=0;i<n;i++)
    {
        if(k[i]==0)
            counter++;
        else if(k[i]==1)
            counter1++;
    }
    if(counter1>=1)
    cout<<"HARD";
    else
        cout<<"EASY";



}
