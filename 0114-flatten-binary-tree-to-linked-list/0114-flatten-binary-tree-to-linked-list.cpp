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
    void preOrder(TreeNode*root,queue<TreeNode*>&temp)
    {
        if(root==NULL)return;
        temp.push(root);
        preOrder(root->left,temp);
        preOrder(root->right,temp);
    }
    void flatten(TreeNode* root) {
        queue<TreeNode*>temp;
        preOrder(root,temp);
        while(temp.size()>0)
        {
            TreeNode*tm = temp.front();
            temp.pop();
            tm->left=NULL;
            if(!temp.empty())tm->right=temp.front();
            else tm->right=NULL;
        }
     
    }
};