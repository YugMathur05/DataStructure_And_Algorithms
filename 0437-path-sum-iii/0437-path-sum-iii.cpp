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
    void helper(TreeNode* root, long long targetSum, int& count) {
        if (root == NULL)
            return;

        if (root->val == targetSum) {
            count++;
        }

        helper(root->left, targetSum - (root->val), count);
        helper(root->right, targetSum - (root->val), count);
    }
    void preOrder(TreeNode* root, long long targetSum, int& count) {
        if (root == NULL)
            return;
        helper(root, targetSum, count);
        preOrder(root->left, targetSum, count);
        preOrder(root->right, targetSum, count);
    }
    int pathSum(TreeNode* root, long long targetSum) {
        int count = 0;

        preOrder(root, targetSum, count);
        return count;
    }
};