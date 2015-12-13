class Solution {
public:
	int trailingZeroes(int n) {
		int iResult = 0;
		for (; n; n /= 5)
			iResult += n / 5;
		return iResult;
	}
};
