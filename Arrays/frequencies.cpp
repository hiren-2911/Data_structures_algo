#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n)
{
    int freq=1,i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
}

int main()
{
    int arr[10]={1,1,1,3,3,3,2,2,2,5};
    int n=10;
    frequency(arr,n);
    return 0;

}