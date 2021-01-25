#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3,s4,counter=0;
    cin>>s1>>s2>>s3>>s4;
    vector<int>v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    v.push_back(s4);
    //v.erase(std::unique(v.begin(), v.end()),v.end());
    sort(v.begin(), v.end());
   /* for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<endl;
    }*/
 //   int counter=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=v[i+1])
            counter++;
    }
        cout<<4-counter<<endl;



}
