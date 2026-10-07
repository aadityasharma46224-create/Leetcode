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
    void insert(TreeNode* temp, TreeNode* newone)
    {
        
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newone = new TreeNode(val);
        if(root==NULL)
        {
            return newone;
        }
        TreeNode* temp = root;
        while(temp!=NULL)
        {
            if(temp->val < newone->val)
            {
                if(temp->right!=NULL)
                {
                    temp = temp->right;
                }
                else
                {
                    temp->right = newone;
                    break;
                }
            }
            else if(temp->val > newone->val)
            {
                if(temp->left!=NULL)
                {
                    temp = temp->left;
                }
                else
                {
                    temp->left = newone;
                    break;
                }
            }
        }
         return root;   
    }
};