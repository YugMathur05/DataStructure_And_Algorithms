class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z' )|| (s[i]>='0' && s[i]<='9') )
            {
                ans+=tolower(s[i]);
            }
        }
       
        string x=ans;
        reverse(x.begin(),x.end());
        if(x==ans)return true;
        return false;
    }
};