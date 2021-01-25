#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,s[1000000],cnt1=0,cnt2=0,cnt3=0,cnt4=0,total_grp=0;
    cin>>n;
    vector<long long int>v;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());

    for(auto itr=v.begin();itr!=v.end();itr++)
    {
      //  cout<<*itr<<endl;
        if(*itr==1)
            cnt1++;
        else if(*itr==2)
            cnt2++;
        else if(*itr==3)
            cnt3++;
        else if(*itr==4)
            cnt4++;

    }
    total_grp+=cnt4;
    cnt4=0;

    total_grp+=cnt2/2;
    cnt2=cnt2%2;

    if(cnt1>=cnt3)
    {
        total_grp+=cnt3;
        cnt1-=cnt3;
        cnt3=0;
        total_grp+=cnt1/4;
        cnt1=cnt1%4;
        long long int b=cnt1+cnt2*2;
        if(b>0 && b<=4)
        {
            total_grp++;
            cnt1=0;
            cnt2=0;
        }
            else if(cnt1==3 && cnt2==1)
            {
                total_grp+=2;
                cnt1=0;
                cnt2=0;
            }
    }
    else
    {
        total_grp+=cnt1;
        cnt3-=cnt1;
        cnt1=0;
        total_grp+=(cnt3+cnt2);
    }

    cout<<total_grp;


}
