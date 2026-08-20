class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        int mx = nums[0];
        for (int i = 1; i < n; i++) {
            if (mx < nums[i])
                mx = nums[i];
        }
        vector<int> hash(mx+1, 0);
        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }
        for (int i = 0; i <= mx; i++) {
            if (hash[i]%2!=0)
                return false;
        }
        return true;
    }
};