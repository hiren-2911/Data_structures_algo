#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sot(int arr[],int n)
{
    for (int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while((j>=0 && arr[j]>key) )
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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