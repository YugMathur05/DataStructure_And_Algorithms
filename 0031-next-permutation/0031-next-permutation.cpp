class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivotIdx = -1;

        // finding pivot index.
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivotIdx = i;
                break;
            }
        }

        // if pivot does not exists.
        if (pivotIdx == -1) {
            sort(nums.begin(), nums.end());
            return;
        }

        // Sort the elements present after pivot idx.
        sort(nums.begin() + pivotIdx + 1, nums.end());

        // swaping just greater element than pivot.
        for (int i = pivotIdx + 1; i < n; i++) {
            if (nums[i] > nums[pivotIdx]) {
                swap(nums[pivotIdx], nums[i]);
                break;
            }
        }
    }
};