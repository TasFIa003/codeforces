#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1000],counter=0;
    cin>>n;
    int maximum,minimum;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     maximum=a[0];
           minimum=a[0];
       for(int i=0;i<n;i++)
       {
           //maximum=a[0];
          // minimum=a[0];
            if(a[i]>maximum)
            {
                maximum=a[i];
                counter++;
            }
            if(a[i]<minimum)
            {
                minimum=a[i];
                counter++;
            }
       }cout<<counter<<endl;
}
