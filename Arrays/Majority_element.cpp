#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={1,1,1,1,1,1,2,3,4,1};
    int n=10,ctr;
    for(int i=0;i<n;i++)
    { 
        ctr=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            ctr++;
        }
        if(ctr>n/2)
        cout<<i;  
    }
    return 0;
}