#include<iostream>
using namespace std;

int main()
{
    long long n,k;
    cin>>n;
    cin>>k;

    int i=1;
    while(2)
    {
        if(n%10!=0)
          {
             n--;
          }
          else
          {
              n=n/10;
          }
        if(i==k)
        {
            break;
        }

        i++;

    }cout<<n;


}
