class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int iAddValue = 1;
		for (int i = digits.size() - 1; i >= 0 && iAddValue > 0; --i) {
			digits[i] += iAddValue;
			iAddValue = digits[i] > 9;
			digits[i] -= iAddValue ? 10 : 0;
		}
		if (iAddValue)
			digits.insert(digits.begin(), 1);
		return digits;
	}
};
