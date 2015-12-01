class Solution {
public:
	typedef vector<vector<int>> VVI;
	typedef vector<int> VI;
	vector<vector<int>> generate(int numRows) {
		VVI aiResult;
		aiResult.resize(numRows);
		for (int i = 0; i < numRows; ++i) {
			for (int j = 0; j <= i; ++j)
				aiResult[i].push_back((0 == j || i == j) ? 1 : (aiResult[i - 1][j] + aiResult[i - 1][j - 1]));
		}
		return aiResult;
	}
};
