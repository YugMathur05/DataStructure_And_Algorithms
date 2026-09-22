class Solution {
public:
    bool check(char s , stack<char>st) {
        if (s == ')' && st.top() == '(' || s == '}' && st.top() == '{' ||
            s == ']' && st.top() == '[')
            return true;
        return false;
    }
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else {
                if (st.empty())
                    return false;
                else if (check(s[i],st) == true) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        if (st.empty())
            return true;
        return false;
    }
};