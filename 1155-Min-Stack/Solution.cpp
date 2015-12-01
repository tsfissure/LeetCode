class MinStack {
public:
	void push(int x) {
		m_aiGeneralStack.push(x);
		if (m_aiMinStack.empty() || x <= m_aiMinStack.top()) {
			m_aiMinStack.push(x);
		}
	}

	void pop() {
		if (m_aiGeneralStack.empty()) return;
		if (m_aiMinStack.top() == m_aiGeneralStack.top())
			m_aiMinStack.pop();
		m_aiGeneralStack.pop();
	}

	int top() {
		return m_aiGeneralStack.top();
	}

	int getMin() {
		return m_aiMinStack.top();
	}
private:
	std::stack<int>	m_aiGeneralStack;
	std::stack<int>	m_aiMinStack;
};
