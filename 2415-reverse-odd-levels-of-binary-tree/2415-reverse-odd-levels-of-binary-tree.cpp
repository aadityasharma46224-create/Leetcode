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
    void pushinvctor(TreeNode* temp, vector<vector<int>>&vv, int maxi)
    {
        if(temp==NULL)
        {
            return;
        }
        vv[maxi].push_back(temp->val);
        pushinvctor(temp->left,vv, maxi+1);
        pushinvctor(temp->right, vv, maxi+1);
    }

    TreeNode* construct(vector<int>&vect)
    {
        queue<TreeNode*>q;
        TreeNode* temp = new TreeNode(vect[0]);
        q.push(temp);
        int i=1;
        int j=2;
        int n = vect.size();
        while(q.size()>0 && i<n && j<n)
        {
            TreeNode* temp2 = q.front();
            q.pop();
            TreeNode* l = new TreeNode(vect[i]);
            TreeNode* r = new TreeNode(vect[j]);
            temp2->left = l;
            temp2->right = r;
            if(l!=NULL)
            {
                q.push(l);
            }
            if(r!=NULL)
            {
                q.push(r);
            }
            i = i+2;
            j = j+2;
        }
        return temp;
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        vector<vector<int>>vv;
        int maxi = level(root);
        for(int i=0; i<maxi; i++)
        {
            vector<int>p;
            vv.push_back(p);
        }
        pushinvctor(root, vv, 0);
        for(int i=0; i<vv.size(); i++)
        {
            if(i%2!=0)
            {
                reverse(vv[i].begin(),vv[i].end());  
            }
        }
        vector<int>vect;
        for(int i=0; i<vv.size(); i++)
        {
            for(int j=0; j<vv[i].size(); j++)
            {
                vect.push_back(vv[i][j]);
            }
        }
        TreeNode* ans = construct(vect);
        return ans;
    }
};