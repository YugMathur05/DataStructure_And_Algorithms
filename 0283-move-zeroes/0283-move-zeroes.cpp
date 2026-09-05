class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                ans.push_back(nums[i]);
        }
        fill(nums.begin(), nums.end(), 0);
        for (int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }
    }
};