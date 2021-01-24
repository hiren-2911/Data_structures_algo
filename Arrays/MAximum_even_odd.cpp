#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4]={10,12,8,4};
    int temp=1,n=4,res=1;
    for(int i=0;i<n-1;i++)
    {
        if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
        {
            temp++;
        }
        else
        {
            temp=1;
        }
        res=max(temp,res);
    }
    cout<<res;
    return 0;
}