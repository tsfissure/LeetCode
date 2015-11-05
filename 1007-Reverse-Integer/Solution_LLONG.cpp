class Solution {
public:
	int reverse(int x) {
		long long iResult = 0;
		for (; x; x /= 10)
			iResult = (iResult << 1) + (iResult << 3) + x % 10;
		return iResult > INT_MAX || iResult < INT_MIN ? 0 : iResult;
	}
};
