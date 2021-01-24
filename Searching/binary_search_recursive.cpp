#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int srch(int arr[],int n,int k,int low,int high)
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(arr[mid]==k)
    return mid;
    else if(arr[mid]>k)
    return srch(arr,n,k,low,mid-1);
    else
    return srch(arr,n,k,mid+1,high);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10,k=10;
  //  int high=n-1,low=0;
    int temp=srch(arr,n,k,0,9);
    cout<<temp;
    return 0;
}