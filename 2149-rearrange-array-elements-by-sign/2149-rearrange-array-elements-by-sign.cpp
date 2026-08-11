class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        int n =  nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }
        int p = 0;
        for(int i = 0 ; i < n ; i+=2)
        {
            nums[i]=positive[p];
            p++;
        }
        int ng = 0;
        for(int i = 1 ; i < n ; i+=2)
        {
            nums[i]=negative[ng];
            ng++;
        }
        return nums;

    }
};