#include<iostream>
#include<bits/stdc++.h>
#include <utility>
using namespace std;

pair<int,int> two_ptr(int arr[],int n,int k)
{
    int low=0,high=n-1,s;
    pair<int,int> res;
    while(low!=high)
    {
        
        s=arr[low]+arr[high];
        if(s==k)
        {
            res.first=low;
            res.second=high;
            return res;
        }
        
        if(s<k)
        low++;
        else
        high--;
    }
    return make_pair(-1,-1);
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10,k=32;
    pair<int,int> pair_sum;
    pair_sum=two_ptr(arr,n,k);
    cout<<pair_sum.first<<" "<<pair_sum.second<<endl;
    return 0;

}