#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={3,0,1,2,5},n=5;
    int left,water=0,right;
    for(int i=1;i<n-1;i++)
    {
        left=arr[i];
        for(int j=0;j<i;j++)
        left=max(arr[j],left);
        right=arr[i];
        for(int k=i+1;k<n;k++)
        right=max(right,arr[k]);

        water+=min(left,right)-arr[i];
    }
    cout<<water;

    return 0;
}