#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void three_way(int arr[],int n)
{
    int l=0,h=n-1,mid=0;
    int temp=arr[l];
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[l]);
            mid++;
            l++;
        }

        else if(arr[mid]==1)
        mid++;

        else
        {
            swap(arr[mid],arr[h]);
            h--;
        }
    }
}

int main()
{
    int arr[6]={0,1,1,2,0,2};
    int n=6;
    three_way(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}

