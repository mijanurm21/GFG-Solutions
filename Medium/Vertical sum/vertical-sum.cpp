//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/
class Solution{
  public:
    void find(Node *root , int pos , int &l , int &r)
    {
        if(!root)
        return;
        
        l=min(l,pos);
        r=max(r,pos);
        
        find(root->left , pos-1 , l , r);
        find(root->right , pos+1 , l , r);
    }
    
    vector <int> verticalSum(Node *root) {
        // add code here.
        int l=0 , r=0;
        find(root , 0 , l , r);
        vector<int> ans(r-l+1,0);
        //vector<bool> visit(r-l+1,0);
        
        queue<Node *>q;
        queue<int>q1;
        q.push(root);
        q1.push(-1*l);
        
        while(!q.empty())
        {
            Node *temp=q.front();
            q.pop();
            int index=q1.front();
            q1.pop();
            
            ans[index]+=temp->data;
            
            if(temp->left)
            {
                q.push(temp->left);
                q1.push(index-1);
            }
            if(temp->right)
            {
                q.push(temp->right);
                q1.push(index+1);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{
    
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
        Node* root = buildTree(s);
        Solution obj;
        vector <int> res = obj.verticalSum(root);
        for (int i : res) cout << i << " ";
        cout<<endl;
    }
}
// } Driver Code Ends