#include<bits/stdc++.h>
using namespace std;
void add_subarrays(int arr[],int k)
{
    //vector<int>v;
  //  v.push_back(arr);
    int sum=0;
   for(int i=0;i<k;i++)
   {
       sum+=arr[i];
   }
   cout<<sum<<endl;
}
void subarray(int arr[], int n)
{

    for (int i=0; i <n; i++)
    {
       for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++)
               {

               cout << arr[k] << " ";
                             add_subarrays(arr,k);
               }
            cout << endl;
           // add_subarrays(arr,k);
        }
    }
}

int main()
{
   int t,x,n,total=0 ;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int>v;
       int a[10000],sum=0;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
      subarray(a,n);
      //add_subarrays(a,n);

    }
}
