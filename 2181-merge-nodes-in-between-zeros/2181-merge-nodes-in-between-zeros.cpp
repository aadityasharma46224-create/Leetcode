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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* newone = new ListNode(100);
        ListNode* ans = newone;
        int x = 0;
        int cnt = 0;
        while(temp!=NULL)
        {
            if(temp->val==0)
            {
                if(cnt>0)
                {
                    ListNode* secondone = new ListNode(x);
                    newone->next = secondone;
                    newone = newone->next;
                    x=0;
                }
                cnt++;
            }
            else
            {
                x = x + temp->val;
            }
            temp = temp->next;
        }
        newone->next = NULL;
        return ans->next;
    }
};