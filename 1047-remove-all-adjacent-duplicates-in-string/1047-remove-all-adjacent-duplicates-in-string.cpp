class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        for (auto ch : s) {
            if (!stk.empty() && stk.top() == ch) {
                stk.pop();
            } else {
                stk.push(ch);
            }
        }
        string result;
        while (!stk.empty()) {
            result = stk.top() + result;
            stk.pop();
        }
        return result;
    }
};