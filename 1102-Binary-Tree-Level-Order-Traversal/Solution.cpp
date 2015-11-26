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

	typedef vector<vector<int>> VVI;

	void levelOrder(TreeNode* root, int iDeepth, VVI& result) {
		if (!root) return;
		if (iDeepth >= result.size())
			result.resize(iDeepth + 1);
		result[iDeepth].push_back(root->val);
		levelOrder(root->left, iDeepth + 1, result);
		levelOrder(root->right, iDeepth + 1, result);
	}

	vector<vector<int>> levelOrder(TreeNode* root) {
		VVI result;
		levelOrder(root, 0, result);
		return result;
	}
};
