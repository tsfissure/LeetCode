class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int iCnt = 0;
		int iResult = 0;
		for (int i = 0; i < (int)nums.size(); ++i) {
			if (!iCnt) {
				iResult = nums[i];
				++iCnt;
				continue;
			}
			iCnt += nums[i] == iResult ? 1 : -1;
		}
		return iResult;
	}
};
