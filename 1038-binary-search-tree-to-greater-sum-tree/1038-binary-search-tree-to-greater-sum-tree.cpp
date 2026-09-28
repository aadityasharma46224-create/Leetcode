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
    void ordr(TreeNode* temp, vector<int>&v)
    {
        if(temp==NULL)
        {
            return;
        }
        ordr(temp->left,v);
        v.push_back(temp->val);
        ordr(temp->right,v);
    }
    int sum(TreeNode* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return temp->val + sum(temp->left) + sum(temp->right);
    }
    void changenode(TreeNode* temp, unordered_map<int,int>&mp) 
    {
        if(temp==NULL)
        {
            return;
        }
        temp->val = mp[temp->val];
        changenode(temp->left, mp);
        changenode(temp->right, mp);
    }
    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* ans = root;
        vector<int>v;
        ordr(root,v);  // 0,1,2,3,4,5,6,7,8
        int s = sum(root);
        vector<int>v2;
        int n = v.size();
        int remaining = s;
        for(int i=0; i<n; i++)
        {
            v2.push_back(remaining);
            remaining -= v[i];
        }
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[v[i]]=v2[i];
        }
        changenode(root, mp);
        return ans;
    }
};