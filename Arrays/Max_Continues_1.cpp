#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10]={0,1,1,1,1,1,1,0,1,1};
    int temp[3]={0,0,0};
    int a=0;
    for (int i=0;i<10;i++)
    {
        if(arr[i]==0)
        a++;
        else 
        temp[a]++;
    }
    cout<<max(temp[0],max(temp[1],temp[2]));
    return 0;

}