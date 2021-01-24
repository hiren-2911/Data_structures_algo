#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp,a,b,tmp;
    cin>>a>>b;
    temp=max(a,b);
    while(true)
    {
        
        if(temp%a==0 && temp%b==0)
        {
            tmp=temp;
            break;
        }
        temp++;
    }
    cout<<tmp;
    return 0;
}