class Solution {
public:

	static int computeMoveDistance(int iCurLine, int iNumRows, bool bIsUp) {
		return bIsUp ? iCurLine << 1 : (iNumRows - iCurLine - 1) << 1;
	}

	string convert(string s, int numRows) {
		if (numRows < 2) return s;
		string kResult = "";

		for (int i = 0; i < numRows; ++i) {
			bool bUp = false;
			for (int iMoveDis, j = i; j < (int)s.size(); j += iMoveDis, bUp ^= true) {
				iMoveDis = computeMoveDistance(i, numRows, bUp);
				if (iMoveDis > 0) kResult += s[j];
			}
		}
		return kResult;
	}
};
