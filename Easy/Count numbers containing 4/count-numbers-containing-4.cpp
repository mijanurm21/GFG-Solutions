//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int count = 0;
        int i = 4;
        while( i<=n){
            int temp = i;
            while( temp >= 4){
                int rem = temp%10;
                if ( rem ==4 )
                {
                    count++;
                    break;
                }
                temp /= 10;
            }
            i++;
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends