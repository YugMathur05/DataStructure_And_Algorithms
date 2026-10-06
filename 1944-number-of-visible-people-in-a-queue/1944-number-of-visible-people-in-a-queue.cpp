class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {

        int n = heights.size();
        vector<int> ans(n);
        stack<int> st;
        ans[n - 1] = 0;
        st.push(heights[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            int count = 0;
            while (!st.empty() && st.top() < heights[i]) {
                st.pop();
                count++;
            }
            if (!st.empty()) {
                count++;
            }
            st.push(heights[i]);
            ans[i]=count;
        }
        return ans;
    }
};