class Solution {public:	ListNode* removeElements(ListNode* head, int val) {		ListNode* pkResult = new ListNode(0);		pkResult->next=head;		ListNode* pkMove = pkResult;		for (; pkMove && pkMove->next; pkMove = pkMove->next) {			for (; pkMove->next && pkMove->next->val == val;) {				pkMove->next = pkMove->next->next;			}		}		return pkResult->next;	}};