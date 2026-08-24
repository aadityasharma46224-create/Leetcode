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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = slow;
        ListNode* ans = temp;
        if(head->next == NULL)
        {
            return head->next;
        }
        while(fast->next!=NULL)
        {
            temp = slow;
            slow = slow->next;
            fast = fast->next;
            if(fast->next!=NULL)
            {
                fast = fast->next;
            }
        }
        temp->next = slow->next;
        return ans;
    }
};