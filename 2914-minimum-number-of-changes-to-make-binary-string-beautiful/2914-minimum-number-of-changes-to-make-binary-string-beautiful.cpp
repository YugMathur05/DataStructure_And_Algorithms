class Solution {
public:
    int minChanges(string s) {
        vector<string> st;

        int count = 0;
       int i =0,j=1;
       while(j<s.size())
       {
        if(s[i]!=s[j])count++;
        i+=2,j+=2;
       }
        return count;
    }
};