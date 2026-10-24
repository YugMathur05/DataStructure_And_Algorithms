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
    int mx_diameter = 0;
    int helper(TreeNode* root) {
        if (root == NULL)
            return 0;
        int left_ans = helper(root->left);
        int right_ans = helper(root->right);
        int diameter = left_ans + right_ans;
        mx_diameter = max(diameter, mx_diameter);
        return 1 + max(left_ans, right_ans);
    }
    int diameterOfBinaryTree(TreeNode* root) {

        helper(root);
        return mx_diameter;
    }
};