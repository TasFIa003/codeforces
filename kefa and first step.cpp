#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,a,counter=0,maximum=1;
    cin>>n;
    vector<int>Vector;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        Vector.push_back(a);
    }
    for(int i=0; i<n; i++)
    {
        counter=1;
        for(int j=i+1; j<n; j++)
        {


            if(Vector[i]<=Vector[j])
            {
                counter++;
                i++;
            }
            else
            {
                break;
            }
            if(counter>maximum)
                maximum=counter;

        }
    }
    cout<<maximum<<endl;
}

