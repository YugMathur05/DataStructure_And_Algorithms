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
    int Diameter = 0;
    int helper(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(helper(root->right), helper(root->left));
    }
    int diameterOfBinaryTree(TreeNode* root) {
          if (root == NULL)
            return 0;
        int Dia = helper(root->left) + helper(root->right);
        Diameter = max(Dia, Diameter);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return Diameter;
    }
};