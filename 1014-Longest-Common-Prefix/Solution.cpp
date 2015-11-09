class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty()) return "";

		int iLength = (int)strs[0].size();
		for (int i = 1; i < (int)strs.size(); ++i) {
			int j;
			for (j = 0; j < (int)strs[i].size() && j < iLength && strs[0][j] == strs[i][j]; ++j);
			if (j < iLength) iLength = j;
		}
		return strs[0].substr(0, iLength);
	}
};
