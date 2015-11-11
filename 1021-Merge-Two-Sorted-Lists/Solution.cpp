/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
	void moveToList(ListNode* &pkMove, ListNode* &pkTgtList) {
		if (!pkTgtList) return;
		pkMove->next = pkTgtList;
		pkTgtList = pkTgtList->next;
		pkMove = pkMove->next;
	}
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* pkResult = new ListNode(0);
		ListNode* pkMove = pkResult;
		for (; l1 && l2; moveToList(pkMove, l1->val < l2->val ? l1 : l2));
		moveToList(pkMove, l1);
		moveToList(pkMove, l2);

		return pkResult->next;
	}
};
