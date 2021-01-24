#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={10,10,10,10,10,10,10,10,10,10};//{1,2,2,3,4,5,6,6,7,8};
    int n=10,temp[n],res=1;
    temp[0]=arr[0];
    for(int i=1;i<10;i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++)
    {   
        if(i<res)
        arr[i]=temp[i];
        else
        arr[i]=0;
    }


    for(int i=0;i<10;i++)
    cout<<arr[i]<<endl;
    return 0;
}