class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
            }
        }
        sort(nums.begin(), nums.end());

        vector<int> mn;
        vector<int> mx;

        for (int i = 0; i < n; i++) {
            if (i < n / 2)
                mn.push_back( 1LL * nums[i] * nums[i]);
            else
                mx.push_back( 1LL * nums[i] * nums[i]);
        }
        long long sum = 0;
        for (int i = 0; i < mx.size(); i++) {
            sum += mx[i];
        }
        for (int i = 0; i < mn.size(); i++) {
            sum -= mn[i];
        }
        return sum;
    }
};