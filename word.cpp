#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int counter1=0,counter2=0;

    for(int i=0; i<str.size(); i++)
    {

            if(str[i]>=65 && str[i]<=90)
            {
                counter1++;

            }
            else if(str[i]>=97 && str[i]<=122)
            {
                counter2++;
            }

    }
        if(counter1>counter2)
        {
            for(int i=0;i<str.size();i++)
            {
               if(str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]-32;

            }
            else if(str[i]>=97 && str[i]<=122)
            {
                str[i]=str[i]+32;
            }
            }
        }

    cout<<str;
}
