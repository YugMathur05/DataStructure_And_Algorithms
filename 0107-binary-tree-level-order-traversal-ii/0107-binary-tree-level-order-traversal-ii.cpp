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
        return 1 + max(level(root->left),level(root->right));
    }
    void levelTraversal(TreeNode* root, vector<int>& temp, int curr,
                        int level) {
        if (root == NULL)
            return;
        if (curr == level) {
            temp.push_back(root->val);
            return;
        }
        levelTraversal(root->left, temp, curr + 1, level);
        levelTraversal(root->right, temp, curr + 1, level);
    }
    void Traversal(TreeNode* root, vector<vector<int>>& nums) {
        int n = level(root);
        for (int i = 1; i <= n; i++) {
            vector<int> temp;
            levelTraversal(root, temp, 1, i);
            nums.push_back(temp);
        }
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> nums;
        Traversal(root, nums);
        reverse(nums.begin(), nums.end());
        return nums;
    }
};