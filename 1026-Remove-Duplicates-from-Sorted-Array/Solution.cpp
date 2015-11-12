class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int iResult = 0;
		for (int i = 0; i < (int)nums.size(); ++i) {
			if (nums[i] != val)
				nums[iResult++] = nums[i];
		}
		return iResult;
	}
};
