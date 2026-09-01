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
    int getDecimalValue(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            int q = temp->val;
            v.push_back(q);
            temp = temp->next;
        }
        int n = v.size();
        int ans=0;
        int j=0;
        for(int i=n-1; i>=0; i--)
        {
            if(v[i]==1)
            {
                ans = ans + pow(2,j);
            }
            j++;
        }
        return ans;
    }
};