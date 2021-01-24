#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={5,0,6,2,3},n=5;
    int left[n],water=0,right[n];
    left[0]=arr[0];
    for(int i=1;i<n;i++)    
    left[i]=max(left[i-1],arr[i]);
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    right[i]=max(right[i+1],arr[i]);

    for(int i=1;i<n-1;i++)
    {
        water+=(min(left[i],right[i])-arr[i]);
    }
    cout<<water;
    return 0;
}