//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int mod=1000000007;
    int solve(int x, int y, vector<vector<int>> &dp){
        if(x == 0 && y == 0) return 1;
        if(x<0 || y<0) return 0;
        if(dp[x][y] != -1) return dp[x][y];
        
        int pick1 = solve(x-1,y, dp)%mod ;
        int pick2 = solve(x, y-1, dp)%mod;
        
        return dp[x][y] = (pick1 + pick2)%mod;
    }
    int ways(int x, int y)
    {
        //code here.
        vector<vector<int>> dp(x+1, vector<int>(y+1, -1));
        return solve(x,y, dp);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends