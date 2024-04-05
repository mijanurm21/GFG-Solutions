//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int min_operations(vector<int>& arr) {
        // Code here
        int n= arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=-1;j<i;j++)
            {
                int len= dp[j+1][i+1];
                if(j== -1 || (arr[i]> arr[j] && arr[i]- arr[j] >= i-j))
                {
                    len= max(len, 1+ dp[i+1][i+1]);
                }
                
                dp[j+1][i]= len;
            }
        }
        
        return  n- dp[0][0];
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.min_operations(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends