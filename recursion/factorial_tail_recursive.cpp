#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n,int temp)
{
    if(n==1)
    return 1;
    cout<<temp*n<<endl;
    fact(n-1,temp*n);
}
int main()
{
    int n;
    cin>>n;
    fact(n,1);
    return 0;
}