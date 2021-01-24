#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp;
    cin>>a>>b;
    temp=a;
    for (int i=1;i<b;i++)
    a=a*temp;
    cout<<a;
    return 0;
}