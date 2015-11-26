/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
#define TS_CONDITION_RETURN_VALUE(C,V) do{ if(C) return (V);}while(0);
	bool isSymmetric(TreeNode* root) {
		if (!root) return true;
		return isSymmetric(root->left, root->right);
	}
	bool isSymmetric(TreeNode* pkLeft, TreeNode* pkRight) {
		TS_CONDITION_RETURN_VALUE(!pkLeft && !pkRight, true);
		TS_CONDITION_RETURN_VALUE(!pkLeft || !pkRight, false);
		TS_CONDITION_RETURN_VALUE(pkLeft->val != pkRight->val, false);
		return isSymmetric(pkLeft->left, pkRight->right) && isSymmetric(pkLeft->right, pkRight->left);
	}
};
