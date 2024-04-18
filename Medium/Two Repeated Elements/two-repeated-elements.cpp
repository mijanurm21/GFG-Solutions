//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        vector<int> ans;
        
        for(int i = 0; i<n+2; i++){
            int num = abs(arr[i]);
            
            if(arr[num] < 0){
                ans.push_back(num);
            }
            arr[num] *= -1;
            
        }
        
        int first = 0, second = 0;
        
        for(int i = 0; i<n+2; i++){
            int num = abs(arr[i]);
            if(num == ans[0]) first++;
            if(num == ans[1]) second++;
            
            if(first == 2) return {ans[0], ans[1]};
            if(second == 2) return {ans[1], ans[0]};
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends