class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                mx = max(mx, count);
                count = 0;
            } else {
                count++;
            }
        }
        mx = max(mx, count);
        return mx;
    }
};