//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        unordered_map<int, int> mp;
        unordered_set<int> nonRepeating;

    for (int i = 0; i < n; i++) {
        int currentElement = arr[i];

       
        if (nonRepeating.find(currentElement) == nonRepeating.end()) {
            mp[currentElement]++;
        }

       
        if (mp[currentElement] > 1) {
            nonRepeating.insert(currentElement);
        }
    }

   
    for (int i = 0; i < n; i++) {
        if (nonRepeating.find(arr[i]) == nonRepeating.end()) {
            return arr[i];
        }
    }

    
    return 0;
        
    } 
  
};


//{ Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}

// } Driver Code Ends