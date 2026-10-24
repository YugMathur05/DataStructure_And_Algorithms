/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode*root,string s,vector<string>&str)
    {
        if(root==NULL)return;
        string a = to_string(root->val);
        if(root->left == NULL && root->right == NULL) 
        {
            s+=a;
            str.push_back(s);
        }
        helper(root->left,s+a+"->",str);
        helper(root->right,s+a+"->",str);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> str;
        helper(root,"", str);
        return str;
    }
};