class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> suf(n);
        vector<int> pre(n);

        pre[0]=nums[0];
        for(int i = 1 ; i < n ; i++)
        {
            pre[i]=nums[i]+pre[i-1];
        }
         suf[n-1]=nums[n-1];
        for(int i = n-2 ; i >= 0 ; i--)
        {
            suf[i]=nums[i]+suf[i+1];
        }

        for(int i = 0 ; i < n ; i++)
        {
            if(pre[i]==suf[i])return i;
        }
        return -1;
    }
};