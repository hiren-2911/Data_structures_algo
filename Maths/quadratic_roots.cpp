// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        int temp,temp1,temp2;
        vector<int>root;
        temp=b*b-4*a*c;
        temp1=floor((-b-sqrt(temp))/(2*a));
        temp2=floor((-b+sqrt(temp))/(2*a));
        if(temp<0)
        cout<<"Imaginary";
        else
        {
                if(temp1>=temp2)
            {
                root.push_back(temp1);
                root.push_back(temp2);
            }
            else
            {
                root.push_back(temp2);
                root.push_back(temp1);
            }
        }
        return root;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends