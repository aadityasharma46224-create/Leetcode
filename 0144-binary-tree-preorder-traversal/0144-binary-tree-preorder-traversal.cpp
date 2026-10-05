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

    //self done
    void traversal(vector<int>&v, TreeNode* temp)
    {
        if(temp==NULL)
        {
            return;
        }
        v.push_back(temp->val);
        traversal(v, temp->left);
        traversal(v, temp->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        traversal(ans, root);
        return ans;
    }
};