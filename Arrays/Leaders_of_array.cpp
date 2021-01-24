#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
vector<int> leaders(int arr[],int n)
{
    int temp=arr[n-1];
    vector<int> vec;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>=temp)
        {
            temp=arr[i];
            vec.push_back(temp);
        }
    }
    reverse(vec.begin(), vec.end());
    return vec;
}

int main()
{
    int arr[10]={1,2,3,10,6,9,4,8,1,0};
    int n=10;
    vector<int> v=leaders(arr,n);
    for(auto it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    

    
    return 0;
}