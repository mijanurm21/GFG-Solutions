//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int nums[], long long int n, long long int k) 
    {
        vector<long long> dp(n, -1e9);
        long long currSum = 0, maxSum = -1e9;
        for(long long i=0; i<n; i++){
            currSum += nums[i];
            dp[i] = max(dp[i], currSum);
            if(currSum < 0)currSum = 0;
        }
        long long i = 0;
        long long j = 0;
        maxSum = -1e9;
        currSum = 0;
        while(j < n){
            currSum += nums[j];
            if(j-i+1 == k){
                if(i > 0){
                    maxSum = max(maxSum, max(currSum, currSum+dp[i-1]));
                }
                else maxSum = max(maxSum, currSum);
                currSum -= nums[i];
                i++;
            }
            j++;
        }
        return maxSum;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends