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

        int Remove_Front = 0;
        int Remove_Back = 0;
        int Remove_Both = 0;

        if (mi_idx > mx_idx) {
            Remove_Front += mi_idx + 1;
        } else {
            Remove_Front += mx_idx + 1;
        }

        if (mi_idx > mx_idx) {
            Remove_Back += (n - mx_idx);
        } else {
            Remove_Back += (n - mi_idx);
        }

        if (mi_idx < mx_idx) {
            Remove_Both += (mi_idx + 1) + (n - mx_idx );
        } else {
            Remove_Both += (mx_idx + 1) + (n - mi_idx);
        }

        return min(Remove_Both, min(Remove_Back, Remove_Front));
    }
};