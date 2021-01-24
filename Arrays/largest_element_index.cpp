#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={1,122,4,3,2,6,3,9,10,8};
    int k;
    for (int i=0;i<10;i++)
    {
        if(arr[0]<=arr[i])
        {
            arr[0]=arr[i];
            k=i;
        }
    }
    cout<<k;
    return 0;

}