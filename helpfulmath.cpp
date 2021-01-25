#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int variable;

    vector<int>v1;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
           {
               continue;
           }
            else{
            variable=s[i]-'0';//'0'=48 so here 1=48 thats mean v=48-48=0,v='1'(49)-48=1
            v1.push_back(variable);
            }
    }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++)
        {
            if(i==v1.size()-1)
                cout<<v1[i]<<endl;
            else
                cout<<v1[i]<<"+";
        }

}
