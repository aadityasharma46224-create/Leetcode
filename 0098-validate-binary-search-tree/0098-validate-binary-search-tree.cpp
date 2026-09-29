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
    bool checkleftsubtree(TreeNode* temp, TreeNode* root)
    {
        if(temp==NULL)
        {
            return true;
        }
        if(temp->val>=root->val)
        {
            return false;
        }
        return (checkleftsubtree(temp->left, root) && checkleftsubtree(temp->right, root));
    }
    bool checkrightsubtree(TreeNode* temp, TreeNode* root)
    {
        if(temp==NULL)
        {
            return true;
        }
        if(temp->val<=root->val)
        {
            return false;
        }
        return (checkrightsubtree(temp->left, root) && checkrightsubtree(temp->right, root));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        return isValidBST(root->left) && isValidBST(root->right) && checkleftsubtree(root->left,root) && checkrightsubtree(root->right, root);
    }
};