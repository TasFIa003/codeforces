#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a[100000],res,sum=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    res=*max_element(a,a+n);

    for(int i=0;i<n;i++)
    {
        sum+=fabs(res-a[i]);
    }
    cout<<sum<<endl;

}
