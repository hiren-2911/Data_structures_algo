#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int hoares(int arr[],int l,int h,int n)
{
    int temp=arr[l];
    int i=l-1,j=n-1;
    while(true)
    {
        do{i++;}
        while(arr[i]<temp);
        do{j--;}
        while(arr[j]>temp);
        if(i>j)
        return i;
        swap(arr[i],arr[j]);
    }
   

}

int main()
{
    int arr[8]={5,3,8,4,2,7,1,10};
    int l=0,h=10,n=8;
    hoares(arr,l,h,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;

}
