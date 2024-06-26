//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here
        long long int l = 0, h = x;
        long long ans = 0;
        
        while(l<=h){
            long long int mid = l + (h - l) / 2; // Calculate mid safely

            if (mid * mid == x) {
                return mid;
            }
            
            if(mid* mid <= x){
                l = mid+1;
                ans = mid;
            }
            else h = mid-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends