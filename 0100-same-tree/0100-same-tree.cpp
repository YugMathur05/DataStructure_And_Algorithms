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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if ((q == NULL && p != NULL) || (q != NULL && p == NULL))
            return false;
        if (q == NULL && p == NULL)
            return true;
        if (p->val != q->val)
            return false;
        bool left_Ans = isSameTree(p->left, q->left);
        if (!left_Ans)
            return false;
        bool right_Ans = isSameTree(p->right, q->right);
        if (!right_Ans)
            return false;
        return true;
    }
};