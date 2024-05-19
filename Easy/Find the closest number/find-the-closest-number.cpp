//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int l = 0, h = n-1;
        int mid = l + (h-l)/2;
        
        
        while(l<h){
            
            mid = (l + h)/2;
            
            
            // if(abs(arr[mid] - k) == 0) return arr[mid];
            
           if(arr[mid] > k){
                h = mid;
                
            }
            else {
                l = mid+1;
                
            }
            
            
        }
        
        if(l-1 >= 0 && k-arr[l-1] < arr[l] - k) return arr[l-1];
        else return arr[l];
        
        
        
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends