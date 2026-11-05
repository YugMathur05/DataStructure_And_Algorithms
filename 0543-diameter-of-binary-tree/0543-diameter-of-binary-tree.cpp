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
    int helper(TreeNode* root, int& maxDia) {
        if (root == NULL)
            return 0;
        int leftLevels = helper(root->left, maxDia);
        int rightLevels = helper(root->right, maxDia);
        int dia = leftLevels + rightLevels;
        maxDia = max(maxDia,dia);
        return 1 + max(leftLevels,rightLevels);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        helper(root, maxDia);
        return maxDia;
    }
};