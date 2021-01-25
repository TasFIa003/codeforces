#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0,cnt1=0,flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            cnt++;
            cnt1=0;

        }
        else
        {
            cnt1++;
            cnt=0;

        }
        //cout<<cnt<<" "<<cnt1<<endl;
        if(cnt==7 || cnt1==7)
          {

          flag=1;
            break;
          }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


