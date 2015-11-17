class Solution {
public:
	string countAndSay(int n) {
		string akResult[2];
		int iCurIdx = 0;
		for (akResult[iCurIdx].push_back('1'); --n; iCurIdx ^= 1) {
			akResult[iCurIdx ^ 1].clear();
			for (int i = 0, j = 0; i < (int)akResult[iCurIdx].size(); i = j) {
				for (j = i; j < (int)akResult[iCurIdx].size() && akResult[iCurIdx][j] == akResult[iCurIdx][i]; ++j);
				akResult[iCurIdx ^ 1].push_back((j - i) + '0');
				akResult[iCurIdx ^ 1].push_back(akResult[iCurIdx][i]);
			}
		}
		return akResult[iCurIdx];
	}
};
