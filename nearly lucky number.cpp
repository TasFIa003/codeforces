#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int counter=0;

    for(int i=0;i<str.size();i++)
    {
          if(str[i]=='4'|| str[i]=='7')
               {
                 counter++;
               }


    }
    if(counter==4||counter==7)
        {cout<<"YES";}
    else
        {cout<<"NO";}
}
