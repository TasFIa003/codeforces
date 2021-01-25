#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=1;i<=6;i++)
    {
        int x=abs(a-i);
        int y=abs(b-i);

            if(x<y)
                cnt1++;
            else if(y<x)
                cnt3++;
            else
                cnt2++;

    }
    cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;

}
