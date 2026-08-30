class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        map<int,int>hasharr;
        for(int i = 0 ; i < n ; i++)
        {
            hasharr[nums[i]]++;
        }
        for(auto x : hasharr)
        {
            if(x.second>n/3)ans.push_back(x.first);
        }
        return ans;
    }
};