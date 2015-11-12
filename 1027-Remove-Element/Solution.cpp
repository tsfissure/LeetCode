class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int iResult = 1;
		for (int i = 1; i < (int)nums.size(); ++i) {
			if (nums[i] != nums[i - 1])
				nums[iResult++] = nums[i];
		}
		return nums.empty() ? 0 : iResult;
	}
};
