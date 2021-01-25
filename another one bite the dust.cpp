#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,counter=0;
    cin>>a>>b>>c;
    counter=2*(min(a,b)+c);
    if(a!=b)
        counter++;

    cout<<counter<<endl;
}
