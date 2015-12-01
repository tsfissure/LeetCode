class Solution {
public:
	typedef std::vector<int> VI;

	vector<int> getRow(int rowIndex) {
		VI akResult;
		akResult.resize(rowIndex + 1);
		long long iCurComb = 1, power = 1;
		for (int l = 0, r = rowIndex; l <= r; ++l, --r) {
			akResult[l] = akResult[r] = iCurComb / power;
			iCurComb *= rowIndex - l;
			power *= l + 1;
			long long lGcd = __gcd(iCurComb, power);
			iCurComb /= lGcd;
			power /= lGcd;
		}
		return akResult;
	}
};
