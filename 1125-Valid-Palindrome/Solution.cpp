class Solution {
public:
	bool isPalindrome(string s) {
		bool bResult = true;
		for (int l = 0, r = s.size() - 1; l < r && bResult; ++l, --r) {
			for (; l < (int)s.size() && !isalpha(s[l]) && !isdigit(s[l]); ++l);
			for (; r >= 0 && !isalpha(s[r]) && ! isdigit(s[r]); --r);
			bResult = l >= r || (s[l] - 'A') % 32 == (s[r] - 'A') % 32;
		}
		return bResult;
	}
};
