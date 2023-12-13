class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow, *fast;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};