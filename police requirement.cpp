#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,sum=0,counter=0;
    cin>>n;
    while(n--){
        cin>>a;

        if(a>0)
            sum+=a;

        else if(sum>0)

            sum--;
        else
            counter++;


    }
    cout<<counter;
}
