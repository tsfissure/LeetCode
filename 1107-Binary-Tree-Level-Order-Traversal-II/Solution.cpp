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

	void levelOrderBottom(TreeNode* root, int iDeepth, VVI& result) {
		if (!root) return;
		if (iDeepth >= result.size())
			result.push_back(vector<int>());
		result[iDeepth].push_back(root->val);
		levelOrderBottom(root->left, iDeepth + 1, result);
		levelOrderBottom(root->right, iDeepth + 1, result);
	}

	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		VVI result;
		levelOrderBottom(root, 0, result);
		reverse(result.begin(), result.end());
		return result;
	}
};
