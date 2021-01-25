#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;
int main()
{
  int n,a;
  cin>>n;
  while(n--)
  {
      cin>>a;
    int r=n*(180-a);
      if(360%(180-a)==0)
      {
          cout<<"YES"<<endl;
      }
      else
        cout<<"NO"<<endl;
  }

}

