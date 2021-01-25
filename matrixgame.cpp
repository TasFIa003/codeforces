#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
  cin>>t;
  int cnt;
    while(t--)
    {
        int n,m,a[n][m];
              cin>>n>>m;
        cnt=0,cnt1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];

                if(a[i][j]==0)
                    cnt++;
                cnt1++;

                }
        }

    if(cnt%2==0)
            cout<<"Vivek"<<endl;
        else
            cout<<"Ashish"<<endl;

    }


}


