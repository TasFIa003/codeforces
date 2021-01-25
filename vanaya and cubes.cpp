#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,counter=0;
    cin>>n;
    if(n==0)
        cout<<"0"<<endl;
   else if(n==1)
        cout<<"1"<<endl;
   else if(n==2)
        cout<<"1"<<endl;
        else
        {
           int j=1;
            while(1){
            for(int i=1;i<=j;i++)
            {
                sum+=i;
            }j++;
                if(sum>n)
                    break;
                else
                    counter++;
            }cout<<counter;
        }

}
