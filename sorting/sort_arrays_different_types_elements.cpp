#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

void srt(int arr[],int n)
{
    int l=0,h=n-1,ctr=-1;
    for(int i=0;i<=h;i++)
    {
        if(arr[i]<0)
        {
            ctr++;
            swap(arr[i],arr[ctr]);
        }
    }
}
int main()
{
    int arr[4]={15,-3,-2,18};
    int n=4;
    srt(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}
