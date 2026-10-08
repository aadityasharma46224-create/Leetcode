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
    TreeNode* vectotree(TreeNode* root, int z)
    {
        
        if(root==NULL)
        {
            return NULL;
        }
        TreeNode* a = root;
        TreeNode* ans = new TreeNode(z);
        while(root!=NULL)
        {
            if(root->val<z)
            {
                if(root->right!=NULL)
                {
                    root = root->right;
                }
                else
                {
                    root->right = ans;
                    break;
                }
            }
            else if(root->val>z)
            {
                if(root->left!=NULL)
                {
                    root = root->left;
                }
                else
                {
                    root->left = ans;
                    break;
                }
            }
        }
        return a;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        TreeNode* temp = new TreeNode(preorder[0]);
        for(int i=1; i<n; i++)
        {
            vectotree(temp, preorder[i]);
        }
        return temp;
    }
};