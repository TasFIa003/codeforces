#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,counter=1,sum=0;
    cin>>k>>r;
    sum=k;

    while(1){


        if(k%10==0||k%10==r)
            break;
        else
        {
            k+=sum;
            counter++;
        }
    }
    cout<<counter;
}
