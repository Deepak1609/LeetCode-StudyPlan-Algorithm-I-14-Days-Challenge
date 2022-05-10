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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(!head->next){
            return NULL;
        }
        // place fast on node before the nth node
        for(int i = 0;i<n;i++){
            fast = fast->next;
        }
        //if we have two nodes only [2,1] and n = 2 then fast will be null after loop.
        if(fast == NULL){
            return head->next;
        }
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        //In the end slow will be at node before nth node and fast will be after the nth node so then just remove
        slow->next = slow->next->next;
        return head;
        
    }
};
