class Solution {
public:
    void vect(TreeNode* temp, vector<int>&v)
    {
        if(temp==NULL)
        {
            return;
        }
        v.push_back(temp->val);
        vect(temp->left, v);
        vect(temp->right, v);
    }
    int sum(TreeNode* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return temp->val + sum(temp->left) + sum(temp->right);
    }
    void mapi(TreeNode* temp, unordered_map<int,int>&mp)
    {
        if(temp==NULL)
        {
            return;
        }
        temp->val = mp[temp->val];
        mapi(temp->left, mp);
        mapi(temp->right, mp);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        vector<int>v;
        vect(root, v);
        sort(v.begin(),v.end());
        int n = v.size();
        int s = sum(root);
        unordered_map<int,int>mp;
        mp[v[0]]=s;
        for(int i=1; i<n; i++)
        {
            mp[v[i]]=s-v[i-1];
            s = s-v[i-1];
        }
        mapi(root, mp);
        return root;
    }
};