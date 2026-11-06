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
    int level(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(level(root->left), level(root->right));
    }
    void nthLevelOdd(TreeNode* root, int currLevel, int reqLevel,
                     vector<int>& nums) {
        if (root == NULL)
            return;
        if (currLevel == reqLevel) {
            nums.push_back(root->val);
            return;
        }
        nthLevelOdd(root->left, currLevel + 1, reqLevel, nums);
        nthLevelOdd(root->right, currLevel + 1, reqLevel, nums);
    }
    void nthLevelEven(TreeNode* root, int currLevel, int reqLevel,
                      vector<int>& nums) {
        if (root == NULL)
            return;
        if (currLevel == reqLevel) {
            nums.push_back(root->val);
            return;
        }
        nthLevelEven(root->right, currLevel + 1, reqLevel, nums);
        nthLevelEven(root->left, currLevel + 1, reqLevel, nums);
    }
    void LevelOrder(TreeNode* root, vector<vector<int>>& ans) {
        int n = level(root);
        for (int i = 1; i <= n; i++) {
            vector<int> nums;
            if (i % 2 == 0)
                nthLevelEven(root, 1, i, nums);

            else {
                nthLevelOdd(root, 1, i, nums);
            }
            ans.push_back(nums);
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        LevelOrder(root,ans);
        return ans;
    }
};