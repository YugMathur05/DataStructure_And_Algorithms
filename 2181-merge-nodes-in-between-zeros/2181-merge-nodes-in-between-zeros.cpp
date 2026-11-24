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
        ListNode* temp = head->next;
        int sum = 0;
        ListNode* ans = NULL;
        ListNode*tail=NULL;
        while (temp != NULL) {

            if (temp->val == 0) {
                ListNode* t = new ListNode(sum);
                
                if (ans == NULL) {
                    ans = t;
                    tail = t;
                } else {
                    tail->next = t;
                    tail = t;
                }
                sum = 0;
            } else {
                sum += temp->val;
            }
            temp = temp->next;
        }

        return ans;
    }
};