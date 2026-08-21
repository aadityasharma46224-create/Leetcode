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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* odd = new ListNode(100);
        ListNode* even = new ListNode(100);
        ListNode* even2 = even;
        ListNode* odd2 = odd;
        int cnt=1;
        while(temp1!=NULL)
        {
            if(cnt%2==0)
            {
                even->next = temp1;
                even = even->next;
            }
            else
            {
                odd->next =  temp1;
                odd = odd->next;
            }
            temp1 = temp1->next;
            cnt++;
        }
        odd->next = even2->next;
        even->next = NULL;
        return odd2->next;
    }
};