#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void unin(int arr[],int arr1[],int n,int m)
{
    int i=0,j=0;
    while(i<n || j<m)
    {
        if((i>0 && arr[i]==arr[i-1]))
        {
            i++;
            continue;
        }
        if((j>0 && arr1[j]==arr1[j-1]))
        {
            j++;
            continue;
        }
    
       if(arr[i]==arr1[j])
        {
            cout<<arr[i]<<endl;
            i++;
            j++;
        }

        else if(i<n && arr[i]<arr1[j])
        {
            cout<<arr[i]<<endl;
            i++;
        }
        else 
        {
            cout<<arr1[j]<<endl;
            j++;
        }
        

    }

}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr1[6]={2,3,3,3,11,12};
    int n=10,m=6;
    unin(arr,arr1,n,m);
    return 0;

}