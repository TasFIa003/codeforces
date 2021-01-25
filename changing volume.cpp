#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;

        c=fabs(a-b);
        counter=c/5;
        c=c%5;
        counter+=c/2;
        c=c%2;
        counter+=c;


        cout<<counter<<endl;
    }




}
