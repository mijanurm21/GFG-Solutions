//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		     int mod = 1e9+7;
            long long arr[n + 1];
            
            arr[0] = 0;
            arr[1] = 1;
            arr[2] = 2;
            
            for (int i = 3; i < n+1; i++)
            {
                arr[i] = arr[i - 1] + arr[i - 2];
                arr[i] = arr[i] % mod;
            }
            
            return arr[n] % mod;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends