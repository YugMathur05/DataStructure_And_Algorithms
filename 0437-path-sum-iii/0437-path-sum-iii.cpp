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
    void CountPaths(TreeNode*root,long long  targetSum, long long &Count)
    {
        if(root==NULL)return;
      
        if(targetSum == root->val) Count++;
        CountPaths(root->left,targetSum-(root->val),Count);
        CountPaths(root->right,targetSum-(root->val),Count);
    }
    void PreOrder(TreeNode*root,long long  targetSum, long long &Count)
    {
        if(root==NULL)return;
        CountPaths(root,targetSum,Count);
        PreOrder(root->left,targetSum,Count);
        PreOrder(root->right,targetSum,Count);

    }
    int pathSum(TreeNode* root, long long  targetSum) {
        long long Count = 0;
        PreOrder(root,targetSum,Count);
        return Count;
    }
};