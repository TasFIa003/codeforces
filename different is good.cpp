#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
   cin>>str;
   sort(str.begin(), str.end());
    auto res = unique(str.begin(), str.end());
    string x=string(str.begin(), res);
   // cout << x << endl;
    if(n>26)
        cout<<"-1"<<endl;
    else
        cout<<n-x.size()<<endl;

}
