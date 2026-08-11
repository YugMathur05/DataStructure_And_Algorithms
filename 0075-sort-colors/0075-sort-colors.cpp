class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int ones = 0, zeros = 0, two = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                ones++;
            else if (nums[i] == 2)
                two++;
            else
                zeros++;
        }

        for (int i = 0; i < n; i++) {
            if (i < zeros)
                nums[i] = 0;
            else if (i < (zeros + ones))
                nums[i] = 1;
            else
                nums[i] = 2;
        }
    }
};