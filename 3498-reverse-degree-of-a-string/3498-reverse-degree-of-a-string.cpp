class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            char ch = s[i];
            int val = (26-int(ch-'a'))*(i+1) ;
            ans+=val;
        }
        return ans;
    }
};