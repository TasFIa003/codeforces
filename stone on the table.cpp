#include<iostream>
using namespace std;

int main()
{
    int n;
    char a[100];
    cin>>n;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {

        if(a[i]==a[i+1])
        {
            counter++;
        }
    }
    cout<<counter;
}
