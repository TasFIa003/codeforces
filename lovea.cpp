#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<s.size();i++)
    {if(s[i]=='a')
        cnt1++;
    else
        cnt2++;

        }
   // cout<<cnt1<<" "<<cnt2<<endl;
    if(cnt1>cnt2)
        cout<<cnt1+cnt2<<endl;
   else if(cnt1==cnt2)
        cout<<(cnt1+cnt2)-1<<endl;
    else
    {
        int flag=0;
        while(1){
        cnt2--;
        if(cnt1>cnt2)
        {
            flag=1;
            break;
        }
        }
        if(flag==1)
                cout<<cnt1+cnt2<<endl;
    }
}
