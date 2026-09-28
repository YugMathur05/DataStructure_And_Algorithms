class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> pre_smaller(n);
        vector<int> nxt_smaller(n);

        pre_smaller[0] = -1;
        st.push(0);
        // finding pre smaller
        for (int i = 1; i < n; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if (st.empty())
                pre_smaller[i] = -1;
            else {
                pre_smaller[i] = st.top();
            }

            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        nxt_smaller[n - 1] = n;
        st.push(n - 1);

        // finding nxt smaller
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if (st.empty())
                nxt_smaller[i] = n;
            else {
                nxt_smaller[i] = st.top();
            }
            st.push(i);
        }

        int mx_area = 0;
        for (int i = 0; i < n; i++) {
            int width = (nxt_smaller[i] - pre_smaller[i] - 1);
            int area = heights[i] * width;
            mx_area = max(mx_area, area);
        }
        return mx_area;
    }
};