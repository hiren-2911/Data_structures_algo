#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int d=3,temp[d],n=6;
    for (int i=0;i<d;i++)
    temp[i]=arr[i];

    for(int i=d;i<n;i++)
    arr[i-d]=arr[i];
    
    for(int i=0;i<d;i++)
    arr[n-i-1]=temp[d-i-1];

    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;

    return 0;
}