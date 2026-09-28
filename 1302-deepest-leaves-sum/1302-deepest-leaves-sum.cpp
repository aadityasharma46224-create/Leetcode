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
    int level(TreeNode* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return 1 + max(level(temp->left) , level(temp->right));
    }
    void sumofleaves(TreeNode* temp, int curr, int req, vector<int>&v)
    {
        if(temp==NULL)
        {
            return;
        }
        if(curr==req)
        {
            v.push_back(temp->val);
        }
        sumofleaves(temp->left, curr+1, req, v);
        sumofleaves(temp->right, curr+1, req, v);
    }
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        vector<int>v;
        int req = level(root);
        sumofleaves(root, 1, req, v);
        int sumi = 0;
        for(int i=0; i<v.size(); i++)
        {
            sumi = sumi + v[i];
        }
        return sumi;
    }
};