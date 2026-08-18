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
        stack<int>st;
        while(temp!=NULL)
        {
            int x = temp->val;
            st.push(x);
            temp = temp->next;
        }
        int i=0;
        int half = st.size()/2;
        while(i<half)
        {
            int p = st.top() + temp2->val;
            st.pop();
            temp2 = temp2->next;
            if(p>max)
            {
                max = p;
            }
            i++;
        }
        return max;
    }
};