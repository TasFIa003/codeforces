#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=1,b=1;
    cin>>a>>b;

    int i=1;
    while(2)
    {
        a*=3;
        b*=2;
        if(a==b && a<b)
        {
            continue;
        }
      else
      {
          if(a>b)
          {
              break;
          }
      }i++;

    }cout<<i;
}
