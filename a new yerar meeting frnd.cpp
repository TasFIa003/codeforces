#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x1,x2,x3,x,y;
    cin>>x1>>x2>>x3;
    vector<long long>v;
    v.push_back(x1);
     v.push_back(x2);
      v.push_back(x3);
       sort(v.begin(),v.end());
       int flag=0;
       /*for(auto itr=v.begin();itr!=v.end();itr++)
       {
           x=*(itr+2)-*(itr+1);
           y=*(itr+1)-*itr;
        cout<<x+y<<endl;
       }*/
       x=v[2]-v[1];
       y=v[1]-v[0];
       cout<<x+y<<endl;

}
