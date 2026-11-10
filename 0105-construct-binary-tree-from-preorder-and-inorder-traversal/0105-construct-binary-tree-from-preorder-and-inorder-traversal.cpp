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
    TreeNode*helper(vector<int>& preorder,int prelo,int prehi,vector<int>& inorder,int inlo,int inhi)
    {
        if(prelo>prehi)return NULL;
        TreeNode*root = new TreeNode(preorder[prelo]);
        if(prelo==prehi)return root;
        int i = 0;
        while(i<inhi)
        {
            if(inorder[i]==preorder[prelo])break;
            i++;
        }
        int leftCount = i-inlo;
        int rightCount = inhi-i;
        root->left = helper(preorder,prelo+1,prelo+leftCount,inorder,inlo,i-1);
        root->right = helper(preorder,prelo+leftCount+1,prehi,inorder,i+1,inhi);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return helper(preorder,0,n-1,inorder,0,n-1);
    }
};