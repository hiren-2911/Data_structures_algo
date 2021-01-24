#include<iostream>
//#include<bits/stdc++.h>
using namespace std;



int main()
{
    int len,count=0;
    cout<<"Enter len";
    cin>>len;
    int arr[len];
    cout<<"Enter arr";
    for (int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
   
    for (int i=0;i<len/2;i++)
    {
        if(arr[i]==arr[len-i-1])
        count++;

    }
    
    if(count==len/2)
    cout<< "Yes";
    else
    cout<< "No";
    return 0;
    

}