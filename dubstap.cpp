#include<bits/stdc++.h>
using namespace std;

int main()
{

    string m;
    cin>>m;
    for(int i=0;i<m.size();i++)
    {
        if(m[i]=='W' && m[i+1]=='U' && m[i+2]=='B')
           {
            i+=2;
            cout<<" ";
           }
        else

            cout<<m[i];

        }

    }

