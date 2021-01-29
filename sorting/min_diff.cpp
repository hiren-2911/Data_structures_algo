#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min_dif(int arr[],int n)
{
    int res=INT_MAX;
    if(n==1)
    return res;
    else
    {
        sort(arr,arr+n);

        for (int i=0;i<n-1;i++)
        {
            res=min(res,abs(arr[i+1]-arr[i]));
        }
        return res;
    }
}

int main()
{
    int arr[3]={5,3,2};
    int n=3;
    int dif=min_dif(arr,n);
    cout<<dif<<endl;
    return 0;
}