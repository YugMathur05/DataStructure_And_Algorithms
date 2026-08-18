class Solution {
public:
    bool check(char s, char stTop) {
        if (stTop == '{' && s == '}' || stTop == '(' && s == ')' ||
            stTop == '[' && s == ']')
            return true;
        return false;
    }
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if (!st.empty() && check(s[i], st.top()) == false)
                return false;
            else if (!st.empty() && (s[i] == '}' || s[i] == ']' || s[i] == ')'))
                st.pop();
            else {
                return false;
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};