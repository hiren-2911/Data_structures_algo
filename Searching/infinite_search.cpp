#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int srech(int arr[],int n,int k)
{
    if(arr[0]==k)
    return 0;
    int low=0,high,mid;
    for(int i=1;i<n;i=i*2)
    {
        if(arr[i]>k)
        { 
            high=i;
            break;
        }
    }
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==k)
        return mid;
        else if(arr[mid]>k)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
    

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10,k=5;
    int temp=srech(arr,n,k);
    cout<<temp;
    return 0;
}