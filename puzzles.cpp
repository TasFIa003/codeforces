#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long n,m,f[100];
    cin>>n>>m;
    for(long long i=0; i<m; i++)
    {
        cin>>f[i];

    }
    sort(f,f+m);
    //for (int i = 0; i < m; ++i)
      //  cout << f[i] << " ";

    long long least_min=1000;

    for(long long i=n;i<=m;i++ )
    {
        long long diff=abs(f[i-1]-f[i-n]);
      //  cout<<diff<<" "<<endl;
        least_min=min(least_min,diff);
    }
    cout<<least_min<<endl;




}
