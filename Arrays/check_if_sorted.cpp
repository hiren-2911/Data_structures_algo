#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10]={1,1,1,1,1,1,1,1,1,1};
    int temp=arr[0];
    int ctr=0;
    for (int i=0;i<10;i++)
    {
        if(temp<=arr[i])
        {
            temp=arr[i];
            ctr++;
        }
    }
    if(ctr!=10)
    cout<<"NO";
    else
    cout<<"Yes";
    return 0;
    
}