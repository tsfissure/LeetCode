class Solution {public:	bool isIsomorphic(string s, string t) {		int iHashS[300] = {0};		int iHashT[300] = {0};		for (int i = 0; i < (int)s.size(); ++i) {			if (iHashS[s[i]] && iHashS[s[i]] != t[i] || iHashT[t[i]] && iHashT[t[i]] != s[i]) return false;			iHashS[s[i]] = t[i];			iHashT[t[i]] = s[i];		}		return true;	}};