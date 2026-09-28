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
    void sum(TreeNode* temp,int curr, int req, vector<int>&v)
    {
        if(temp==NULL)
        {
            return;
        }
        if(curr == req)
        {
            v.push_back(temp->val);
        }   
        sum(temp->left,curr+1, req, v);
        sum(temp->right,curr+1, req, v);
    }
    vector<int>v;
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        if(levels(root)>=3)
        {
            if(root->val%2==0)
            {
                sum(root, 1, 3,v);
            }
            sumEvenGrandparent(root->left);
            sumEvenGrandparent(root->right);
        }
        int ans = 0;
        for(int i=0; i<v.size(); i++)
        {
            ans = ans + v[i];
        }
        return ans;
    }
};