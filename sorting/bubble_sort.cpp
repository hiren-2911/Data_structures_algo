#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sot(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
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