#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    if(n>0)
        cout<<n<<endl;
    else
    {
       int a= n / 100 * 10 + n % 10;
        int b=(n-(n%10))/10;
        cout<<max(a,b)<<endl;
    }


}

