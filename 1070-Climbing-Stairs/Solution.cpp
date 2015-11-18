class Solution {
public:
	int climbStairs(int n) {
		int a = 0, b = 1, c = 1;
		for (; n--;) {
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
};
