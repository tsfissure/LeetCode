class Solution {

public:
	typedef unsigned long long ULLONG;
	std::vector<ULLONG>m_aulHashValues;
	int strStr(string haystack, string needle) {
		int iLength = needle.size();
		int magic = 131;//魔法(进制)值.
		ULLONG ulHayHash = 0; //haystack串的过程hash值.
		ULLONG ulPower = 1; //magic的iLength次方.
		ULLONG ulNeedleHash = 0; //needle串的总hash值
		for (int i = 0; i < iLength; ++i) {
			ulPower *= magic;
			ulNeedleHash = ulNeedleHash * magic + needle[i]; //needle的hash值.
		}
		for (int i = 0; i < iLength; ++i) {
			ulHayHash = ulHayHash * magic + haystack[i];
			m_aulHashValues.push_back(ulHayHash);
		}
		if (ulHayHash == ulNeedleHash) return 0;
		int iResult = -1;
		for (int i = iLength; i < (int)haystack.size(); ++i) {
			ulHayHash = ulHayHash * magic + haystack[i];
			if (ulHayHash - m_aulHashValues[i - iLength]*ulPower == ulNeedleHash) {
				iResult = i - iLength + 1;
				break;
			}
			m_aulHashValues.push_back(ulHayHash);
		}

		return iResult;
	}
};
