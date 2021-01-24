#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void merge(int arr[],int low,int high,int mid)
 {
    int n1=mid-low+1,n2=high-mid;
    int arrl[n1],arrh[n2];
    for(int i=0;i<n1;i++)
    arrl[i]=arr[low+i];
    
    for (int i=0;i<n2;i++)
    arrh[i]=arr[mid+1+i];

    int i=0,j=0,temp=low;
    while(i<n1 && j<n2)
    {
        if(arrl[i]<=arrh[j])
        {
            arr[temp]=arrl[i];
            temp++;
            i++;
        }
        else
        {
            arr[temp]=arrh[j];
            temp++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[temp]=arrl[i];
        temp++;
        i++;
    }
    while(j<n2)
    {
        arr[temp]=arrh[j];
        temp++;
        j++;
    }
 }


 void mergesort(int arr[],int l,int r)
 {
    if(r>l)
    {
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,r,m);
    }
 }
int main()
{
    int arr[5]={10,5,30,15,7};
    int low=0,high=4,n=5;
    mergesort(arr,low,high);
    for (int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
}
