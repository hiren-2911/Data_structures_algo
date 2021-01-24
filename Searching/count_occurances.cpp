#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first_ocr(int arr[],int n,int k)
{
    int high=n-1,low=0,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]>k)
        high=mid-1;
        else if(arr[mid]<k)
        low=mid+1;
        else
        {
            if(arr[mid]!=arr[mid-1] || mid==0)
            return mid;
            else
            high=mid-1;
        }
    }
    return -1;  
}

int lst_ocr(int arr[],int n,int k)
{
    int high=n-1,low=0,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]>k)
        high=mid-1;
        else if(arr[mid]<k)
        low=mid+1;
        else
        {
            if(arr[mid]!=arr[mid+1] || mid==n-1)
            return mid;
            else
            low=mid+1;
        }
    }
    return -1;  
}

int num_ocr(int arr[],int n,int k)
{
    int low,high,res;
    low=first_ocr(arr,n,k);
    if(low==-1)
    return -1;
    high=lst_ocr(arr,n,k);
    res=high-low+1;
   
    return res;

}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10,k=2;
    int ans=num_ocr(arr,n,k);
    cout<<ans;
    return 0;

}