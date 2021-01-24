#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int a)
{
    if(a==1)
    return false;
    for (int i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
        return false;
    }
    return true;
}

int main()
{
    int a;
    cin>>a;
    cout<<prime(a);
    return 0;
}
 // O(sqrt(n))