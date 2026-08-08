class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int currsum =0;
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            currsum+=nums[i];
            maxSum=max(maxSum,currsum);
            if(currsum<0)currsum=0;
        }
        return maxSum;
    }
};