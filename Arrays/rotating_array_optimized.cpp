#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low, int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6},d=10,n=6;
    if(d>=n)
    d=d%n;
    else
    d=d;
    
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;

}