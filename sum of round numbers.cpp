#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n;
   long long s;
  //vector<long long>v;
   cin>>n;
   while(n--)
   {
       cin>>s;
       vector<long long>v;
       int p=1;
       while(s>0)
       {
           if((s%10)>0)
           {
               v.push_back((s%10)*p);
           }

            s/=10;
            p*=10;

       }
       cout<<v.size()<<endl;
       for(auto i:v)
        cout<<i<<" ";
        cout<<endl;

   }


}
