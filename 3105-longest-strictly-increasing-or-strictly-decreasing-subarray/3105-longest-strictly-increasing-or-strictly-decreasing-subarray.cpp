class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int incresing_Count = 1;
        int decreasing_Count = 1;
        int Curr_increasing = 1;
        int Curr_decreasing = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {
                incresing_Count = max(incresing_Count, Curr_increasing);
                Curr_increasing = 1;
            } else {
                Curr_increasing++;
            }
        }

        for (int i = 1; i < n; i++) {
            if (nums[i] >= nums[i - 1]) {
                decreasing_Count = max(decreasing_Count, Curr_decreasing);
                Curr_decreasing = 1;
            } else {
                 Curr_decreasing++;
            }
        }
        incresing_Count = max(incresing_Count, Curr_increasing);
        decreasing_Count = max(decreasing_Count, Curr_decreasing);
        return max(incresing_Count, decreasing_Count);
    }
};