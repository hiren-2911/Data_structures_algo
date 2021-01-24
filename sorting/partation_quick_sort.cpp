#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

void partation(int arr[],int n,int x,int arr1[])
{
    int temp=arr[x],j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=temp)
        {
            arr1[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>temp)
        {
            arr1[j]=arr[i];
            j++;
        }
    }


}

int main()
{
    int arr[10]={66,10,55,12,19,15,18,44,33,20};
    int arr1[10]={0,0,0,0,0,0,0,0,0,0};
    int n=10,x=6;
    partation(arr,n,x,arr1);
    for(int i=0;i<n;i++)
    cout<<arr1[i]<<endl;
    return 0;
}

