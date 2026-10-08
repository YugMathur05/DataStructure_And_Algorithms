class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n = num.size();
        if (k == n)
            return "0";
        for (int i = 0; i < n; i++) {
            while (!st.empty() && st.top() - '0' > num[i] - '0' && k > 0) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        if (st.empty())
            return "0";
        while (!st.empty() && k--) {
            st.pop();
        }

        string str = "";

        while (!st.empty()) {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());

        int idx = -1;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] != '0') {
                idx = i;
                break;
            }
        }
        if (idx == -1)
            return "0";
        string ans = "";
        for (int i = idx; i < str.size(); i++) {
            ans += str[i];
        }

        return ans;
    }
};