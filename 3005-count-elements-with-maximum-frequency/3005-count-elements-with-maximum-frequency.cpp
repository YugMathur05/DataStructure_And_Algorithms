class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> hashmp(101,0);

        for (int i = 0; i < n; i++) {
            hashmp[nums[i]]++;
        }

        int mxfeq = 0;

        for (int i = 0; i < hashmp.size(); i++) {
            mxfeq = max(mxfeq, hashmp[i]);
        }

        int count = 0;
        for (int i = 0; i < hashmp.size(); i++) {
            if (hashmp[i] == mxfeq) {
                count += mxfeq;
            }
        }
        return count;
    }
};