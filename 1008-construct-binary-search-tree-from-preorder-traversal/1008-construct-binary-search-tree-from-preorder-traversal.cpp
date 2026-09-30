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
    void insert(TreeNode* root, int value)
    {
        if(root==NULL)
        {
            TreeNode* temp = new TreeNode(value);
        }
        else if(root->val > value)
        {
            if(root->left == NULL)
            {
                root->left = new TreeNode(value);
            }
            else
            {
                insert(root->left, value);
            }
        }
        else if(root->val < value)
        {
            if(root->right==NULL)
            {
                root->right = new TreeNode(value);
            }
            else
            {
                insert(root->right, value);
            }
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        TreeNode* ans = new TreeNode(preorder[0]);
        for(int i=1; i<n; i++)
        {
            insert(ans , preorder[i]);
        }
        return ans;
    }
};