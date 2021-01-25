#include<iostream>
using namespace std;

int main()
{
    int x=0;
    char str[100];
    int n;
    cin>>n;
    gets(str);
    for(int i=0;i<n;i++)
    {
        gets(str);
        for(int j=0;j<=2;j++)
        {
            if(str[j]=='+')
            {
                x++;
                break;
            }
            else if(str[j]=='-')
            {
                x--;
                break;
            }

        }


    }cout<<x;
}
