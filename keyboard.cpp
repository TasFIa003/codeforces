#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s1,s2;
    cin>>s1>>s2;

    if(s1=="L")
    {
        for(int i=0; i<s2.size(); i++)
        {
            for( int j=0; j<s.size(); j++)
            {
                if(s2[i]==s[j])
                    cout<<s[j+1];
            }
        }
    }
    else
    {
        for(int i=0; i<s2.size(); i++)
        {
            for( int j=0; j<s.size(); j++)
            {
                 if(s2[i]==s[j])
                    cout<<s[j-1];
            }
        }

    }

}
