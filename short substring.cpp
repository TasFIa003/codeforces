#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string b;
    string s;

    for(int i=0;i<t;i++)
    {
        cin>>b;
        cout<<b[0];
        for(int i=1;i<b.size()-1;i+=2)
        {
            cout<<b[i];
        }
        cout<<b[b.size()-1];
        cout<<endl;

    }

}
