#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{1,122,4,3,2,15,3,9,10,8};
    int k,dummy=arr[0];
    vector<int> temp;
    for (int i=1;i<arr.size();i++)
    {
        if(dummy<=arr[i])
        {
            dummy=arr[i];
            k=i;
        }
    }
    temp=arr;
    arr.erase(arr.begin()+k);
    int dumb=arr[0];
    k=0;
    for (int i=1;i<arr.size();i++)
    {
        if(dumb<=arr[i])
        {
            dumb=arr[i];
            k=i;
        }
    }
    int d;
    for(int i=0;i<temp.size();i++)
    {
        if(arr[k]==temp[i])
        d=i;
    }
    cout<<d;
    return 0;

}