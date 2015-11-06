class Solution {
public:

#define TS_CONDITION_BREAK(c) if(c) break;

	int myAtoi(string str) {
		int iLeftCharPos, iResult = 0;
		for (iLeftCharPos = 0; iLeftCharPos < (int)str.size() && ' ' == str[iLeftCharPos]; ++iLeftCharPos);//去掉前面的空格

		//判断是不是负数.
		bool bNegative = iLeftCharPos < (int)str.size() && '-' == str[iLeftCharPos];
		//如果是加减号开头，不计算它.
		if (iLeftCharPos < (int)str.size() && ('-' == str[iLeftCharPos] || '+' == str[iLeftCharPos]))
			++iLeftCharPos;

		bool bOverFlow = false;//是否溢出.
		for (int i = iLeftCharPos; i < (int)str.size(); ++i) {
			TS_CONDITION_BREAK(!isdigit(str[i]));//不是数字，停止
			int iNextValue = (iResult << 1) + (iResult << 3) + str[i] - '0';
			bOverFlow = (iNextValue / 10 != iResult);//计算是否溢出.
			TS_CONDITION_BREAK(bOverFlow);
			iResult = iNextValue;
		}
		return bOverFlow ? (bNegative ? INT_MIN : INT_MAX) : (iResult * (bNegative ? -1 : 1));
	}
};
