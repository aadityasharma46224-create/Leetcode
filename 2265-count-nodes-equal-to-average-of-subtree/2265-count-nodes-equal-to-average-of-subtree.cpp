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
    int count(TreeNode* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return 1 + count(temp->left) + count(temp->right);
    }
    int averag(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return root->val + averag(root->left) + averag(root->right);
    }
    int cont=0;
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int p = count(root);
        int x = averag(root);
        if(x/p==root->val)
        {
            cont++;
        }
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return cont;
    }
};