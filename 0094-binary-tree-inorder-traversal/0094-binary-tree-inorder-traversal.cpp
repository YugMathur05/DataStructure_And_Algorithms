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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nums;
        TreeNode* curr = root;
        while (curr != NULL) {
            if (curr->left != NULL) {
                TreeNode* pred = curr->left;
                while (pred->right != NULL && pred->right != curr) {
                    pred = pred->right;
                }
                if (pred->right == NULL) {
                    pred->right = curr;
                    curr = curr->left;
                } else {
                    pred->right = NULL;
                    nums.push_back(curr->val);
                    curr = curr->right;
                }
            } else {
                nums.push_back(curr->val);
                curr = curr->right;
            }
        }
        return nums;
    }
};