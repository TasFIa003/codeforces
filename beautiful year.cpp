#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    while(1)
    {
        y++;
        int a=y/1000;
      //  cout<<a<<endl;
     // cout<<y;
      int z=y/100;
      //cout<<z<<endl;
        int b=z%10;
        cout<<b<<endl;
        int c=y/10%10;
       // cout<<c<<endl;
            cout<<y<<endl;
        int d=y%10;
        cout<<d<<endl;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }

    }cout<<y<<endl;
}
