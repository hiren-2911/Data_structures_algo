#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int ctr=9,temp;
    for(int i=0;i<6;i++)
    {
        temp=arr[i];
        arr[i]=arr[ctr];
        arr[ctr]=temp;
        ctr--;
    }
    for(int i=0;i<10;i++)
    cout<<arr[i]<<endl;
    return 0;
}