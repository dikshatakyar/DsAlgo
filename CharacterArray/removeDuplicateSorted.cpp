// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        // 1 1 1 2 2 3 4 4 4 4
        // 1 2 3 4
        // int total = 0;
        int j = 0;
        for(int i = 0; i < n - 1; ++i){
            if(a[i] != a[i + 1]){
                a[j] = a[i];
                ++j;
            }            
        }
        a[j] = a[n - 1];
        ++j;
    return j;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends