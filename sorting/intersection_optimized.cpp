#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace  std;

void inter(int arr[],int arr1[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(i>0 && arr[i]==arr[i-1])
        {
            i++;
            continue;
           
        }
        if(arr[i]>arr1[j])
        j++;
        else if(arr[i]<arr1[j])
        i++;
        else
        {
            cout<<arr[i]<<endl;
            i++;
            j++;
        }
    }
}

int main()
{
    int arr[10]={1,1,1,3,4,5,5,5,8,10};
    int arr1[6]={1,1,1,1,5,7};
    int n=10,m=6;
    
    inter(arr ,arr1 ,n,m);
    return 0;
}

