#include<iostream>
#include<bits/stdc++.h>
#include <math.h>
using namespace std;

void sot(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int tem=i,temp;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[tem])
            tem=j;
        }
        temp=arr[i];
        arr[i]=arr[tem];
        arr[tem]=temp;
    }
}

int main()
{
    int arr[10]={3,5,4,1,2,10,7,6,9,8};
    int n=10;
    sot(arr,n);
    for (int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}