//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
        // Code here.
        int n = arr.size();
        int l = 1, r = n-1;
        int mid = l + (r-l)/2;
        
        while(l<=r){
             mid = l + (r-l)/2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return arr[mid];
            else if(arr[mid]> arr[mid-1] && arr[mid] < arr[mid+1]) l = mid+1;
            else r = mid-1;
            
        }
        return arr[mid];
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends