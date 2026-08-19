/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {

            fast = fast->next->next;
            slow = slow->next     //the concept of fast and slow is valid for cirular path whenever we have to detect wether a circular patyh is present then we use this concept fast and slow pointer definetly meetes once in the circular path

            if (fast == slow) {
                return true;
            }
        }

        return false;
    }
};
