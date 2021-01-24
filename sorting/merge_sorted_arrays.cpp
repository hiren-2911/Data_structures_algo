#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

void merge(int arr[],int arr1[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr[i]<=arr1[j])
        {
            cout<<arr[i]<<endl;
            i++;
        }
        else
        {
            cout<<arr1[j]<<endl;
            j++;
        }
    }
    while(i<n)
    {
         cout<<arr[i]<<endl;
         i++;
    }
   

    while(j<m)
    {
        cout<<arr1[j]<<endl;
        j++;
    }
   
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr1[5]={11,12,13,14,15};
    int n=10,m=5;
    merge(arr,arr1,n,m);
    return 0;
}
