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
    int mx_Dia = 0;
    int helper(TreeNode*root)
    {
        if(root==NULL)return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        mx_Dia = max(mx_Dia,(left+right));
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return mx_Dia;
    }
};