#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rtr(int arr[],int n)
{
    bool abb[5]={false,false,false,false,false};
    for(int i=0;i<n;i++)
    {
       if(abb[arr[i]]==true)
       return arr[i];
       abb[arr[i]]=true;
    }
    return -1;
}

int main()
{
    int arr[6]={0,1,2,3,2,2};
    int n=6;
    int temp=rtr(arr,n);
    cout<<temp;
    
    return 0;
}