//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    
	    int l = 0, h = n-1;
	    
	    while(l<h){
	        int mid = (l+h)/2;
	        
	       // if(arr[l] < arr[mid] && arr[l] < arr[h]) return 0;
	        
	        if(arr[mid] > arr[h] ) l = mid+1;
	        else h = mid;
	    }
	    return l;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends