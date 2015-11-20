class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = m - 1, j = n - 1, iPos = n + m - 1; i >= 0 || j >= 0; --i) {
			for (; j >= 0 && (nums2[j] >= nums1[i] || i < 0); --j) {
				nums1[iPos--] = nums2[j];
			}
			nums1[iPos--] = nums1[i];
		}
	}
};
