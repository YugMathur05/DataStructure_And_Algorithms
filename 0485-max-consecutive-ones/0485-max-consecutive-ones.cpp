class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {

            if (nums[i] == 0) {
                mx = max(mx, sum);
                sum = 0;
            } else
                sum += nums[i];
        }
        mx = max(mx, sum);
        return mx;
    }
};