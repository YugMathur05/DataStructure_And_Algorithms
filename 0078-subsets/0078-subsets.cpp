class Solution {
public:
    void helperFun(vector<int>& nums, vector<int> ans,
                   vector<vector<int>>& finalAns, int idx) {
        if (idx == nums.size()) {
            finalAns.push_back(ans);
            return;
        }
        helperFun(nums, ans, finalAns, idx + 1);
        ans.push_back(nums[idx]);
        helperFun(nums, ans, finalAns, idx + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helperFun(nums, ans, finalAns, 0);
        return finalAns;
    }
};