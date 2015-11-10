class Solution {

	bool isLeft(char ch) {
		return '{' == ch || '[' == ch || '(' == ch;
	}

	bool isMatch(char cLeft, char cRight) {
		return ('{' == cLeft && '}' == cRight) ||
					 ('[' == cLeft && ']' == cRight) ||
					 ('(' == cLeft && ')' == cRight);
	}

public:
	bool isValid(string s) {
		std::stack<char> kStack;
		int i = 0;
		for (; i < (int)s.size(); ++i) {
			if (isLeft(s[i])) kStack.push(s[i]);// push if is left.
			else if (kStack.empty()) break;//s[i] is right.
			else if (isMatch(kStack.top(), s[i])) kStack.pop();//match
			else break;//no
		}
		return kStack.empty() && i >= (int)s.size();//stack is empty and for over.
	}
};
