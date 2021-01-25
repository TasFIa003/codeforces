#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,counter1=0,counter2=0,i;
    cin>>n>>h;
    int a[1000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
            counter1++;
        else
            counter2=counter2+2;
    }cout<<counter1+counter2;

}
