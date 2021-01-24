#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int num,temp=1,count=0;
    cout <<"enter n";
    cin >> num;
    for (long int i=1;i<=num;i++)
    {
        temp=temp*i;
        cout << temp << endl;
    }
    while(temp%10==0)
    {
        temp=temp/10;
        count++;
    }
    cout << count;
    return 0;
    
}