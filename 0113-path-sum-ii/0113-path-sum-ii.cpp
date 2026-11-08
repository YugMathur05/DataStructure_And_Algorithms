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
    void helper(TreeNode* root, int targetSum, vector<vector<int>>& ans,
                vector<int> nums) {
        if (root == NULL)
            return;
       
        if (root->left == NULL && root->right == NULL) {
            if (root->val == targetSum) {
                nums.push_back(root->val);
                ans.push_back(nums);
            }
            return;
        }
        nums.push_back(root->val);
        helper(root->left, targetSum - (root->val), ans, nums);
        helper(root->right, targetSum - (root->val), ans, nums);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> nums;
        helper(root, targetSum, ans,nums);
        return ans;
    }
};