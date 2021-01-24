#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first_ocr(int arr[],int n,int k)
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
            if(arr[mid]!=arr[mid-1]||mid==0)
            return mid;
            else
            high=mid-1; 
        }
    }
    return -1;
}
int main()
{
    int arr[10]={1,2,2,2,2,6,7,8,9,10};
    int n=10,k=2,temp;
    temp=first_ocr(arr,n,k);
    cout<<temp;
    return 0;
}