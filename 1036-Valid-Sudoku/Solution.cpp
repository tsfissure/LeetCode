class Solution {
public:
	//char:'1'~'9'.
	//return: 2^(1~9);
	int powerByChar(char ch) {
		return 1 << (ch - '0');
	}

	//riBlock:引用.
	bool addCharacterToBlock(char ch, int &riBlock) {
		if ('.' == ch) return true;
		if (riBlock & powerByChar(ch)) return false;
		riBlock |= powerByChar(ch);
		return true;
	}

	bool isValidSudoku(vector<vector<char>>& board) {
		bool bResult = true;//初始化成true,一旦有不成立的就成false.
		int iBlocks[10] = {0};//9个小正方形.
		int iColumn[10] = {0};//9列
		int iRow = 0;//每一行.
		for (int i = 0; i < 9 && bResult; ++i) {
			iRow = 0;//把一行初始化成0.
			for (int j = 0; j < 9 && bResult; ++j) {
				bResult &= addCharacterToBlock(board[i][j], iRow);
				bResult &= addCharacterToBlock(board[i][j], iColumn[j]);
				bResult &= addCharacterToBlock(board[i][j], iBlocks[i / 3 * 3 + j / 3]);
			}
		}
		return bResult;
	}
};
