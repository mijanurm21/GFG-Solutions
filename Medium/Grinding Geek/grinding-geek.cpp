//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int max_courses(int n, int total, vector<int> &cost)
    {
        //Code Here
          vector<int> curr(total+1, 0);
        
        for(int ind=n-1; ind>=0; ind--){
            for(int tot=total; tot>=0; tot--){
                
                int notBuy = curr[tot];
                int buy = 0;
                if(cost[ind]<=tot){
                    int x = tot-cost[ind]+floor(0.9*cost[ind]);
                    buy = 1+curr[x];
                }
                
                curr[tot] = max(buy, notBuy);
            }
            
        }
        
        return curr[total];
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
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends