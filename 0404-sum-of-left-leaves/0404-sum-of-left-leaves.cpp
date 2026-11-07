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
void helper(TreeNode*root,bool flag , int &sum)
{
    if(root==NULL)return;
    if(flag==true && (root->left==NULL && root->right==NULL))
    {
        sum+=root->val;
    }
    helper(root->left,flag=true,sum);
    helper(root->right,flag = false,sum);
}
    int sumOfLeftLeaves(TreeNode* root) {
        bool flag;
        int ans=0;
        helper(root,flag,ans);
        return ans;
    }
};