class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mxProduct=INT_MIN;
        int suf=1,pre=1;
        for(int i=0;i<n;i++)
        {
            if(pre==0)pre=1;
             if(suf==0)suf=1;
             pre*=nums[i];
             suf*=nums[n-i-1];
             mxProduct=max(mxProduct,max(pre,suf));
        }
        return mxProduct;
    }
};