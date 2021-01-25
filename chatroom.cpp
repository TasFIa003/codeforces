#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    string b="hello";
    int counter=0,j=0;
    for(int i=0;i<a.size();i++)
    {

            if(a[i]==b[j])
            {
                j++;
                counter++;
            }
            if(counter==5)
                break;

    }
    if(counter==5)
        cout<<"YES";
    else
        cout<<"NO";


}
