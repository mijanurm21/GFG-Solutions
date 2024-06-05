//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a, a+n);
       sort(b, b+m);
       int s1 = 0, s2 = 0;
       for(int i = 0; i<n; i++) s1 += a[i];
       for(int i = 0; i<m; i++) s2 += b[i];
       int lS = min(s1, s2);
       int mS = max(s1, s2);
       
       int i1= 0, i2 = 0;
       
       while(i1<n && i2<m)
       {
           int absDiff = abs(a[i1]- b[i2]);
           
           if(lS + absDiff == mS - absDiff) return 1;
           else if(lS + absDiff < mS - absDiff)
           {
               if(a[i1] >= b[i2])
               {
                   i1++;
               }
               else i2++;
           }
           else 
           {
               if(a[i1] >= b[i2])
               {
                   i2++;
               }
               else i1++;
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends