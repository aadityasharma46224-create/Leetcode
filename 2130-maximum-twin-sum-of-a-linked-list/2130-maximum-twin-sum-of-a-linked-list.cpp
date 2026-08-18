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
    int pairSum(ListNode* head) {
        int max = 0;
        ListNode* temp = head;
        ListNode* temp2 = head;
        //stack<int>st;
        vector<int>v;
        while(temp!=NULL)
        {
            int x = temp->val;
            v.push_back(x);
            // st.push(x);
            temp = temp->next;
        }
        int i=v.size()-1;
        while(i>0)
        {
            int p = v[i] + temp2->val;
            // st.pop();
            temp2 = temp2->next;
            if(p>max)
            {
                max = p;
            }
            i--;
        }
        return max;
    }
};