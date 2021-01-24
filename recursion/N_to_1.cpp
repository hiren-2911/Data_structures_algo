#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int print(int n)
{
    cout<<n<<endl;
    if(n==1)
    return 1;
    else
    return print(n-1);
}
int main()
{
    int a;
    cin>>a;
    print(a);
    return 0;
}