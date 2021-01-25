#include<bits/stdc++.h>
using namespace std;

int main()
{   vector<char> v = {'a', 'e', 'i', 'o', 'u','y',
                           'A', 'E', 'I', 'O', 'U','Y'};
    string str,str1;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
       if(find(v.begin(),v.end(),str[i])!=v.end())
       {
         // str=str.replace(i,1,"");
           // i-=2;
           continue;

       }
      // if(str[i]>=65&&str[i]>=90){
            else{
                    str1+='.';
            str1+=towlower(str[i]);
       }

    }
    cout<<str1;

}
