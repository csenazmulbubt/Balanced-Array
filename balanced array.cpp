#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,sum1=0,sum=0,x=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        x=(n/2);
        for(int i=0;i<x;i++)
            sum+=arr[i];
        for(int i=x;i<n;i++)
            sum1+=arr[i];
            cout<<abs(sum-sum1)<<endl;

    }

}



