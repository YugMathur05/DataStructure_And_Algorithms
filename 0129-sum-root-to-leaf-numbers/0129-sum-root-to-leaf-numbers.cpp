/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void calculate(TreeNode*root,int &Sum,string s)
    {
        if(root==NULL)return;
          s+=to_string(root->val);
        if(root->left==NULL && root->right == NULL)
        {
            int num = stoi(s);
            Sum+=num;
            return;
        }
      
        calculate(root->left,Sum,s);
        calculate(root->right,Sum,s);
    }
    int sumNumbers(TreeNode* root) {
        int Sum = 0;
        calculate(root,Sum,"");
        return Sum;
    }
};