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
	ListNode* deleteDuplicates(ListNode* head) {
		if (!head) return nullptr;
		ListNode* pkResult = head;
		ListNode* pkMove = pkResult;
		ListNode* pkLastNode = head;
		for (head = head->next; head; head = head->next, pkLastNode = pkLastNode->next) {
			if (head->val != pkLastNode->val) {
				pkMove->next = head;
				pkMove = pkMove->next;
			}
		}
		pkMove->next = nullptr;
		return pkResult;
	}
};
