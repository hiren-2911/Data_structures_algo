#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lst_ocr(int arr[],int n,int k)
{
    int low=0,high=n-1,mid;
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

int main()
{
    int arr[10]={1,2,2,2,2,2,2,2,2,2};
    int n=10,k=2;
    int temp=lst_ocr(arr,n,k);
    cout<<temp;
    return 0;
}