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
	int maxDepth(TreeNode* root) {
		int iResult = 0;
		if (!root) return iResult;
		iResult = std::max(maxDepth(root->left) + 1, iResult);
		iResult = std::max(maxDepth(root->right) + 1, iResult);
		return iResult;
	}
};
