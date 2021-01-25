#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,x[100];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        x[a]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
}
