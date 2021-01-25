#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,a[100000],counter=0.0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        counter+=a[i];
    }
        counter=(counter/n);
  cout.precision(12);
  cout<<counter;


}
