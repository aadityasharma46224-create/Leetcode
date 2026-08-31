/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head->next;
        vector<int>p;
        p.push_back(-1);
        p.push_back(-1);
        if(temp->next == NULL)
        {
            return p;
        }
        vector<int>v;
        int prevval = head->val;
        int nextval = 0;
        int cnt=1;
        while(temp->next!=NULL)
        {
            nextval = temp->next->val;
            if(((temp->val)>prevval && (temp->val)>nextval)||((temp->val)<prevval && (temp->val)<nextval))
            {
                v.push_back(cnt);
            }
            prevval = temp->val;
            cnt++;
            temp = temp->next;
        }
        sort(v.begin(),v.end());
        int siz = v.size();
        if(siz==1 || siz==0)
        {
            return p;
        }
        int mini = INT_MAX;
        for(int i=siz-1; i>0; i--)
        {
            int g = v[i]-v[i-1];
            if(g<mini)
            {
                mini = g;
            }
        } 
        int maxi = v[siz-1]-v[0];
        vector<int>ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};