#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

int lomuto(int arr[],int l,int h)
{
    int temp=arr[h],ctr=l-1;
   // if(x!=h-l)
   // swap(arr[x],arr[h-l]);
    for(int i=l;i<=h-1;i++)
    {
        if(arr[i]<temp)
        {
            ctr++;
            swap(arr[ctr],arr[i]);
        }
    }
    swap(arr[ctr+1],arr[h]);
    
    if(ctr==-1)
    return h;
    return ctr;
}

void quick(int arr[],int l,int h)
{
    if(l<h)
    {
        int temp=lomuto(arr,l,h);
        quick(arr,l,temp);
        quick(arr,temp+1,h);
    }
}


int main()
{
    int arr[10]={11,10,7,3,16,55,0,-1,9,77};
    int l=0,h=9,x=9;
   //cout<<lomuto(arr,l,h)<<endl;
    quick(arr,l,h);
    for(int i=0;i<=9;i++)
    cout<<arr[i]<<endl;
    return 0;

}
