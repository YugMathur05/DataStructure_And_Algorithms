class Solution {
public:
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    void nthLevelEven(TreeNode* root, int curr_level, int level,
                      vector<int>& temp) {
        if (root == NULL)
            return;
        if (curr_level == level) {
            temp.push_back(root->val);
            return;
        }
        nthLevelEven(root->right, curr_level + 1, level, temp);
        nthLevelEven(root->left, curr_level + 1, level, temp);
    }
    void nthLevelOdd(TreeNode* root, int curr_level, int level,
                     vector<int>& temp) {
        if (root == NULL)
            return;
        if (curr_level == level) {
            temp.push_back(root->val);
            return;
        }
        nthLevelOdd(root->left, curr_level + 1, level, temp);
        nthLevelOdd(root->right, curr_level + 1, level, temp);
    }

    void levelTraversal(TreeNode* root, vector<vector<int>>& nums) {
        int n = levels(root);

        for (int i = 1; i <= n; i++) {
            vector<int> temp;
            if (i % 2 == 0) {
                nthLevelEven(root, 1, i, temp);
                nums.push_back(temp);
            } else {
                nthLevelOdd(root, 1, i, temp);
                nums.push_back(temp);
            }
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> nums;
        levelTraversal(root, nums);
        return nums;
    }
};