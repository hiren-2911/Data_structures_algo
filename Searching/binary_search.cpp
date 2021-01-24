#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int srch(int arr[],int n,int k)
{
    int lft=0,rht=n,middle;
    while(true)
    {
        middle=(rht+lft)/2;
        if(arr[middle]==k)
        return middle;
        if(arr[middle]>=k)
        rht=middle;
        else
        lft=middle+1;
        for(int i=lft;i<rht;i++)
        {
            if(arr[i]==k)
            return i;
        }
        if(lft>=rht)
        return -1;
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int temp=srch(arr,n,0);
    cout<<temp;
    return 0;
    
}