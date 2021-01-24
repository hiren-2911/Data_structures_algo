#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    int ctr=0,temp=0,n=10,res=0,temp1=0;
    for (int i=0;i<n;i++)
    {
        if(arr[i-1]==arr[i] && arr[i]==1)
        ctr++;
        if(arr[i]==0 && arr[i-1]==1)
        {
            res=max(ctr,res);
            ctr=0;
        }
        if(arr[i]==1)
        temp++;
        if(arr[i]==0)
        temp1++;
        //cout<<ctr<<endl;
    }
    if(n==temp)
    cout<<temp;
    else if(n==temp1)
    cout<<0;
    else
    cout<<res+1;
    return 0;
}