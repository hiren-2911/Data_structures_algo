#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={1,2,2,2,2,3,4,5,6,2};
    int n=10,k=2;
    int low=0,high=n-1,mid,ans=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==k && arr[mid-1]!=k)
        return mid;
        else if(arr[mid]>k)
        high=mid-1;
        else
        low=mid+1;
    }
    return 0;

}