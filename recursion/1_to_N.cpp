#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*int print(int n)
{
    if(n==0)
    return 1;
    print(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}*/

// tail recursive.

int print(int n,int k)
{
    if(n==0)
    return 1;
    cout<<k<<endl;
    print(n-1,k+1);
    return 0;
}

int main()
{
    int n;
    cin>>n;
    print(n,1);
    return 0;
}
