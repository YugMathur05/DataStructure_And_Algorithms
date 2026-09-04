class Solution {
public:
    int findMax(vector<int>& nums, int st, int ed) {
        int max = nums[st];
        for (int i = st + 1; i <= ed; i++) {
            if (nums[i] > max) {
                max = nums[i];
            }
        }

        return max;
    }
    int findMin(vector<int>& nums, int st) {
        int n = nums.size();
        int min = nums[st];
        for (int i = st + 1; i < n; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }

        return min;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int mx = findMax(nums, 0, i);
            int mi = findMin(nums, i);
            if (mx - mi <= k)
                return  i;
        }

        return -1;
    }
};