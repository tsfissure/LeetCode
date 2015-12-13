class Solution {
public:
	string convertToTitle(int n) {
		string kResult;
		for (; n; n = (n - 1) / 26) {
			kResult += 'A' + (n % 26 + 25) % 26;
		}
		reverse(kResult.begin(), kResult.end());
		return kResult;
	}
};
