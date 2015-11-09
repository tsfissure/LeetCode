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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* pkResult = new ListNode(0);
		pkResult->next = head;//新建一个节点并把next指向head，方便后面返回.
		ListNode* p = pkResult;
		for (; n--; head = head->next);//把head节点移动n次.
		for (; head; head = head->next, p = p->next);//没移动到尾，就继续往下移动，但这些p也要跟着移动.
		p->next = p->next->next;//把p的next删除.
		return pkResult->next;
	}
};
