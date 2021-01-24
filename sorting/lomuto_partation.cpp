#include<iostream>
#include<bits/stdc++.h>

using namespace  std;
void lomuto(int arr[],int n,int x)
{
    int temp=arr[x],ctr=-1;
    if(x!=n-1)
    swap(arr[x],arr[n-1]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<temp)
        {
            ctr++;
            swap(arr[ctr],arr[i]);
        }
    }
    swap(arr[ctr+1],arr[n-1]);
}

int main()
{
    int arr[10]={6,8,2,9,10,1,4,5,3,7};
    int n=10,x=6;
    lomuto(arr,n,x);
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}

