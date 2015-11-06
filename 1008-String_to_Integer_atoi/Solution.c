int myAtoi(char* str) {
	for (; ' ' == *str; ++str);
	int iResult = 0;
	bool bNegative = '-' == *str, bOverFlow = false;
	if ('+' == *str || '-' == *str) ++str;

	for (; isdigit(*str); ++str) {
		int iNextValue = (iResult << 1) + (iResult << 3) + (*str) - '0';
		bOverFlow = (iNextValue / 10 != iResult);
		if (bOverFlow) break;
		iResult = iNextValue;
	}
	return bOverFlow ? (bNegative ? INT_MIN : INT_MAX) : (iResult * (bNegative ? -1 : 1));
}
