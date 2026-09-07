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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        unordered_map<ListNode*, bool> mp;

        ListNode* temp = headA;

        while (temp != nullptr) {
            mp[temp] = true;
            temp = temp->next;
        }

        temp = headB;

        while (temp != nullptr) {
            if (mp.find(temp) != mp.end()) {
                return temp;
            }

            temp = temp->next;
        }

        return nullptr;
    }
};