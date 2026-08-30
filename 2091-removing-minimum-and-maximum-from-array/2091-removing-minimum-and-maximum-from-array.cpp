class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int n = nums.size();

        int mi = INT_MAX;
        int mx = INT_MIN;
        int mi_idx = -1;
        int mx_idx = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] > mx) {
                mx = nums[i];
                mx_idx = i;
            }
            if (nums[i] < mi) {
                mi = nums[i];
                mi_idx = i;
            }
        }

        int Remove_Front = max(mi_idx,mx_idx)+1;
        int Remove_Back = n-min(mi_idx,mx_idx);
        int Remove_Both =  min(mi_idx,mx_idx)+1 + n-max(mi_idx,mx_idx) ;

        

        return min({Remove_Both,Remove_Back, Remove_Front});
    }
};