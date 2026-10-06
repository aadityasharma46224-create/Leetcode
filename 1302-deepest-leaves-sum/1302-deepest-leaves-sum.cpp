class Solution {
public:
    int levels(TreeNode* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return 1 + max(levels(temp->left), levels(temp->right));
    }
    void sum(TreeNode* temp, int curr, int req, vector<int>&v)
    {
        if(temp==NULL)
        {
            return;
        }
        if(curr == req)
        {
            v.push_back(temp->val);
        }
        sum(temp->left, curr+1, req,v);
        sum(temp->right, curr+1, req,v);
    }
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        int l = levels(root);
        vector<int>v;
        sum(root, 1, l, v);
        int ans = 0;
        for(int i=0; i<v.size(); i++)
        {
            ans = ans + v[i];
        }
        return ans;
    }
};