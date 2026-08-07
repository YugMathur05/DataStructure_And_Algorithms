class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size(), m = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int g_Pointer = 0, s_Pointer = 0;
        int count=0;
        while (s_Pointer < m && g_Pointer < n) {
            if(g[g_Pointer]<=s[s_Pointer])
            {
                count++;
                g_Pointer++;
                s_Pointer++;
            }
            else if(g[g_Pointer]>s[s_Pointer])
            {
                s_Pointer++;
            }
        }
        return count;
    }
};