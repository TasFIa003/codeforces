#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,z1,z2,z3,z4,z5,x,y;
    cin>>a>>b>>c;
    z1=a+b*c;
    z2=a*(b+c);
    z3=a*b*c;
    z4=(a+b)*c;
    z5=a+b+c;
   //cout<<z1<<" "<<z2<<" "<<z3<<" "<<z4<<" "<<z5<<endl;
    if(z1>z2 && z1>z3)
    {
        x=z1;
    }
    else if(z2>z1 && z2>z3)
    {
        x=z2;
    }
    else
    {
        x=z3;
    }
    //cout<<x;
    if(x>z4)
    {
        y=x;
    }
    else
    {
        y=z4;
    }
    if(y>z5)
    {
        cout<<y;
    }
    else
    {
        cout<<z5;
    }
    //cout<<max(z5,z1);

}
