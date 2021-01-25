#include<bits/stdc++.h>
using namespace std;
int main()
{
    string v[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
    cin>>n;
    n--;
    while(1)
    {
        if(n>=5)
        {
            n=n-5;
            n=n/2;
        }
        else{
            break;
        }
    }
    cout<<v[n]<<endl;



}
