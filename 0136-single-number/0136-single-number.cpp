class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int,int>v;
        for(int i=0;i<n;i++)
        {
            v[nums[i]]++;

        }
        for(auto x:v)
        {
            if(x.second==1)return x.first;
        }
        return -1;
    }
};