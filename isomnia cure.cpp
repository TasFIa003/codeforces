#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,counter=0;
    cin>>k>>l>>m>>n>>d;


    for(int i=1;i<=d;i++)
        {
            if(i%k==0 || i%l==0 || i%m==0||i%n==0)
                counter++;
                else if(k==1||l==1||m==1||n==1)
                    counter=d;
        }
    cout<<counter;
}
