#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long   int n,s;
    int x,y;
    cin>>s>>n;
    vector< pair <int,int> > v1;


    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        v1.push_back(make_pair(x,y));

    }
    int flag=0;
    sort(v1.begin(),v1.end());
    for(int i=0; i<n; i++)
    {
        if(s<=v1[i].first)
        {
            flag=1;
            break;
        }
        else
        {
            s+=v1[i].second;
        }

    }
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";
}
