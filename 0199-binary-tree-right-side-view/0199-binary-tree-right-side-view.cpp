/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int levels(TreeNode*root)
{
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void helper(TreeNode*root,vector<int>&ans,int level,int currLevel)
{
    if(root==NULL)return;
    if(currLevel==level)
    {
        ans[level-1]=root->val;
    }
 helper(root->left,ans,level,currLevel+1);
 helper(root->right,ans,level,currLevel+1);
}
void nthLevel(TreeNode*root,vector<int>&ans)
{
    int n = levels(root);
    if(root==NULL)return;
    for(int i = 1 ; i <= n ; i++)
    {
        helper(root,ans,i,1);
    }
}
    vector<int> rightSideView(TreeNode* root) {
     int n = levels(root);
     vector<int>ans(n);
     nthLevel(root,ans);
     return ans;
    }
};