#include<iostream>
using namespace std;
int a,b,c,d,e,f;
int fn(int n)
{
    if(n==0)return a;
     else if(n==1)return b;
       else if(n==2)return c;
        else if(n==3)return d;
         else if(n==4)return e;
           else if(n==5)return f;
            else
                return(fn(n*(n-1))+fn(n*(n-2))+fn(n*(n-3))+fn(n*(n-4))+fn(n*(n-5))+fn(n*(n-6)));
}
int main()
{
    int c=0,t,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;

        cout<<"case "<<c++<<" : "<<fn(n)<<endl;
    }

}
