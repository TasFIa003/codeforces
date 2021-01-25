#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,x2,x3,a,b,c;
    cin>>x1>>x2>>x3;
    a=(x1+x2+(fabs(x1-x2)))/2;
    b=(x1+x3+(fabs(x1-x3)))/2;
    c=(x2+x3+(fabs(x2-x3)))/2;
    int z1=max(a,b);
    int z2=max(z1,c);
    cout<<z2<<" eh o maior"<<endl;
}
