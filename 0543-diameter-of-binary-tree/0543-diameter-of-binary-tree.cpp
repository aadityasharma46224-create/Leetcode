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
    int levels(TreeNode* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return 1 + max(levels(temp->left),levels(temp->right));
    } 
    int maxi = 0;      // new concept learnt that we can initialise value before function
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int a = levels(root->left)+levels(root->right);
        maxi = max(maxi,a);
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxi;
    }
};