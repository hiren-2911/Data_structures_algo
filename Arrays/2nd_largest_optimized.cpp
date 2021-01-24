#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={1,122,4,3,2,6,3,9,10,8};
    int temp=arr[0],k,t;
    for (int i=1;i<10;i++)
    {
        if(temp<=arr[i])
        {
            k=temp;
            temp=arr[i];
        }
    }
    cout<<k;
    //for(int i=0;i<10;i++)
    //if(arr[i]==k)
    //cout<<i;
    return 0;

}