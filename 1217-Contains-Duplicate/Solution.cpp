class Solution {public:	bool containsDuplicate(vector<int>& nums) {		const int iBuffer = 1e6 + 9;		int vis[iBuffer] = {0};		for (int i = 0; i < (int)nums.size(); ++i) {			if (vis[(iBuffer + nums[i]) % iBuffer])				return true;			vis[(iBuffer + nums[i]) % iBuffer] = 1;		}		return false;	}};