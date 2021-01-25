#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,flag1=0,flag=0;
    cin>>t;
    string str,s[1000];
    for(int i=0;i<t;i++)
    {
        cin>>str;
        s[i]=str;
        for(int i=0;i<t;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(((s[i][j]==s[i][j+1]&&s[i][j]=='O')||((s[i][j+2]==s[i][j+3]&&s[i][j+2]=='O')))&&flag1!=1)
                {
                    if((s[i][j]==s[i][j+1]&&s[i][j]=='O'))
                    {
                        s[i][j]='+';
                        s[i][j+1]='+';
                        flag=1;

                    }
                    else
                    {
                        s[i][j+2]='+';
                        s[i][j+3]='+';
                        flag=1;

                    }
                    flag1=1;

                }

            }

        }
    }

    if(flag==1)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<t;i++)
                cout<<s[i]<<endl;
        }

    else
        cout<<"NO"<<endl;
}
