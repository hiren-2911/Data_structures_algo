#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power(int num,int n)
{
    if(n==1)
    return num;
    else 
    return num*power(num,n-1);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}