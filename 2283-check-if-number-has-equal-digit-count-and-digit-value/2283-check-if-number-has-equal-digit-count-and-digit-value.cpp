class Solution {
public:
    bool digitCount(string num) {
        vector<int>hashmp(10);
   
        for(char ch : num)
        {
            hashmp[ch-'0']++;
        }

        for(int i = 0 ; i < num.size() ; i++)
        {
            if(hashmp[i]!= num[i]-'0')
            {
                return false;
            }
        }
        return true;
    }
};