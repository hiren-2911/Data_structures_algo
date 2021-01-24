// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

int digitsInFactorial(int N)
{
    unsigned long long temp=1;
    int ctr=0;
    for(int i=1;i<=N;i++)
    temp=temp*i;
    
    cout<<temp<<endl;
    
    while(temp!=0)
    {
        ctr++;
        temp=temp/10;
    }
    
    return ctr;
}

// { Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling method digitsInFactorial()
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends