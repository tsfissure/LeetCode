class Solution {
public:
	int titleToNumber(string s) {
		int iResult = 0;
		for (int i = 0; i < (int)s.size(); ++i) {
			iResult = iResult * 26 + s[i] - 'A' + 1;
		}
		return iResult;
	}
};
