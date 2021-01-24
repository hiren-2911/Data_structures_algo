#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int temp,temp1;
    if(b<a)
    {
        temp1=b;
        b=a;
        a=temp1;
    }
    for (int i=a;i>0;i--)
    {
        if(b%i==0)
        {
            temp=i;
            break;
        }
    }
    return temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}

//Time complexity is O(n) n=smaller number