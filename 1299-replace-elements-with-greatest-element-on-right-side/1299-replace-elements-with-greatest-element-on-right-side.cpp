class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int mx=arr[n-1];
        vector<int>ans(n);
        ans[n-1]=-1;
        for(int i = n-2;i>=0;i--)
        {
            ans[i]=mx;
            if(mx<arr[i])
            {
                mx=arr[i];
            }
        }
        return ans;
    }
};