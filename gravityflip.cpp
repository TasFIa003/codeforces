#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000];
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    for(auto itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<endl;
    }
}
