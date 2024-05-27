//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int solve(int ind, int prev, int n, vector<int>& a, vector<vector<int>>&dp) {
    if (ind >= n) return 0;
    
     if(dp[ind][prev+1]!=-1)
      return dp[ind][prev+1];
    
    int npick = solve(ind + 1,prev, n, a, dp);
    
    int pick = 0;
    if ( prev == -1 || abs(a[ind] - a[prev]) == 1) {
        pick = 1 + solve(ind + 1,ind, n, a, dp);
    }
    
     return dp[ind][prev+1] = max(pick,npick);
}
    int longestSubseq(int n, vector<int> &a) {
        // code here
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        
        return solve(0, -1,n, a, dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> a(n);
        Array::input(a, n);

        Solution obj;
        int res = obj.longestSubseq(n, a);

        cout << res << endl;
    }
}

// } Driver Code Ends