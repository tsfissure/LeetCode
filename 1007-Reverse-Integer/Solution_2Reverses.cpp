class Solution {
public:
	int reverse(int x) {
		int iResult = 0;
		for (int y = x; y; y /= 10)
			iResult = (iResult << 1) + (iResult << 3) + y % 10;//the reverse of x
		int reverseOfResult = 0;
		for (int y = iResult; y; y /= 10)
			reverseOfResult = (reverseOfResult << 1) + (reverseOfResult << 3) + y % 10;//the reverse of reverse of x
		for (; x != 0 && 0 == x % 10; x /= 10);//clear zero
		
		return reverseOfResult == x ? iResult : 0;
	}
};
