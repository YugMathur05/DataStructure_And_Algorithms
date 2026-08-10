class Solution {
public:
    char findTheDifference(string s, string t) {
        int m = s.size();
        int n = t.size();
        int ans = s[0];
        for(int i=1;i<m;i++)
        {
            ans^=s[i];
        }
         for(int i=0;i<n;i++)
        {
            ans^=t[i];
        }
        return ans;
    }
};