class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int reqNo=target-nums[i];
            if(mp.find(reqNo)!=mp.end())
            {
                return {mp[reqNo],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};