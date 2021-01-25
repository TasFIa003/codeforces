#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,flag1=0;
    int n,a[100];
    cin>>t;
    while(t--){
            cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=1){
                    flag1=1;
                    }else{
                    flag1=0;
                    break;
                    }
                }

        if(flag1==1 || n==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }




    }



}
