 #include<iostream>
 #include <cmath>
 using namespace std;

 int main()
 {
     int arr[10]={10,20,20,20,20,30,30,1,12,18};
     int res=1,n=10;
     for (int i=1;i<n;i++)
     {
         if(arr[res-1]!=arr[i])
        {
             arr[res]=arr[i];
             res++;
        }
     }
     for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     return 0;
 }