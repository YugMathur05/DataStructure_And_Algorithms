class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n - 1;
        int low = 0;
        int first = -1, last = -1;
        // finding first occurance
        while (high >= low) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        // reset high and low pointers
        high = n - 1, low = 0;

        // finding last occurance
        while (high >= low) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return {first, last};
    }
};