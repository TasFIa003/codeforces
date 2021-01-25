#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt;
    cin>>n;
     int a[n];
    for(int i=0;i<n;i++)
    {
       // int a[n];
        cin>>a[i];
    }
        cnt=1;

        for(int i=0;i<n-1;i++)
        {

          if(a[i]!=a[i+1])
                cnt++;
        }


    cout<<cnt<<endl;


}
