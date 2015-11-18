
class Solution {
	static int getIntByIndxInString(const std::string& rkStr, int iIndx) {
		return iIndx < (int)rkStr.size() ? rkStr[iIndx] - '0' : 0;
	}
public:
	string addBinary(string a, string b) {
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		string kResult;
		int iAddValue = 0;
		for (int i = 0; i < (int)a.size() || i < (int)b.size(); ++i) {
			int iAddSum = getIntByIndxInString(a, i) + getIntByIndxInString(b, i) + iAddValue;//这里是整数相加结果只有0 1 2
			kResult.push_back((iAddSum & 1) + '0');//iAddSum&1结果为0和1，再加上'0'就是字符串的0和1了。
			iAddValue = iAddSum > 1;//如果和为2说明有进位.
		}
		if (iAddValue)
			kResult.push_back('1');
		reverse(kResult.begin(), kResult.end());
		return kResult;
	}
};
