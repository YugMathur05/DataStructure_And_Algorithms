class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i = 0 ; i < n ; i++)
        {
            string s = to_string(nums[i]);
            for(int i = 0 ; i < s.size();i++)
            {
                int digit = s[i]-'0';
                ans.push_back(digit);
            }
        }
        return ans;
    }
};