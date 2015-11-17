class Solution {
public:
	int lengthOfLastWord(string s) {
		int iLastChar = s.size() - 1;
		for (; iLastChar >= 0 && ' ' == s[iLastChar]; --iLastChar);
		int iResult = 0;
		for (; iLastChar >= 0 && ' ' != s[iLastChar]; --iLastChar, ++iResult);
		return iResult;
	}
};
