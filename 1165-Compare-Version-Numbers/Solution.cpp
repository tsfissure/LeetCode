class Solution {
public:

	int getIntInVersion(const string& kVersion, int& iStartPos) {
		int iResult = 0, i;
		for (i = iStartPos; i < (int)kVersion.size() && isdigit(kVersion[i]); ++i) {
			iResult = (iResult << 1) + (iResult << 3) + kVersion[i] - '0';
		}
		return iStartPos = i + 1, iResult;
	}

	int compareVersion(string version1, string version2) {
		for (int i = 0, j = 0; i < (int)version1.size() || j < (int)version2.size();) {
			int v1 = getIntInVersion(version1, i);
			int v2 = getIntInVersion(version2, j);
			if (v1 > v2) return 1;
			if (v1 < v2) return -1;
		}
		return 0;
	}
};
