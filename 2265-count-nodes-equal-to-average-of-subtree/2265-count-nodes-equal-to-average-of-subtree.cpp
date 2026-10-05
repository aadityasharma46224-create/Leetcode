class Solution {
public:
    int count(TreeNode* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return 1 + count(temp->left)+ count(temp->right);
    }
    int sum(TreeNode* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return temp->val + sum(temp->left) + sum(temp->right);
    }
    int cnt=0;
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int avg = sum(root)/count(root);
        if(avg == root->val)
        {
            cnt++;
        }
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return cnt;
    }
};