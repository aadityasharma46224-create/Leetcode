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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ans = root;
        TreeNode* temp = new TreeNode(val);
        if(root==NULL)
        {
            return temp;
        }
        while(root!=NULL)
        {
            if(root->val < val)
            {
                if(root->right == NULL)
                {
                    root->right = temp;
                    return ans;
                }
                root = root->right;
            }    
            else if(root->val > val)
            {
                if(root->left == NULL)
                {
                    root->left = temp;
                    return ans;
                }
                root = root->left;
            }   
        }
        return ans;
    }
};