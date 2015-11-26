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

	int maxDepth(TreeNode* root, bool& bIsBalance) {
		if (!root) return 0;
		int iLeftDepth = maxDepth(root->left, bIsBalance) + 1;
		int iRightDepth = maxDepth(root->right, bIsBalance) + 1;
		bIsBalance &= std::abs(iLeftDepth - iRightDepth) < 2;
		return std::max(iLeftDepth, iRightDepth);
	}

	bool isBalanced(TreeNode* root) {
		bool bResult = true;
		return !root || (std::abs(maxDepth(root->left, bResult) - maxDepth(root->right, bResult)) < 2 && bResult);
	}
};
