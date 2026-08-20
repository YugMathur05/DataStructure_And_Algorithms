class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int x = 0, y = 0;
        for (int i = 2; i < n; i++) {
            if (arr1[x] > arr2[y]) {
                arr1.push_back(nums[i]);
                x++;
            }

            else {
                arr2.push_back(nums[i]);
                y++;
            }
        }

        for (int i = 0; i < arr2.size(); i++) {
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};