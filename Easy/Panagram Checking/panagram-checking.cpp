//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        vector<int>v(26,0);
        
        for(int i = 0; i<s.size(); i++){
           
            if(tolower(s[i]) >='a' && tolower(s[i]) <='z' || tolower(s[i]) >='A' && tolower(s[i]) <='Z') v[tolower(s[i])-'a']++;
            else continue;
        }
        
        for(int i = 0; i<26; i++){
            if(v[i] == 0) return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends