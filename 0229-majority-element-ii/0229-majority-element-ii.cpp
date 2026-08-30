class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele_1 = INT_MIN, ele_2 = INT_MIN;
        int counter_1 = 0, counter_2 = 0;
        for (int i = 0; i < n; i++) {
            if (counter_1 == 0 && nums[i] != ele_2) {
                counter_1++;
                ele_1 = nums[i];
            } else if (counter_2 == 0 && nums[i] != ele_1) {
                counter_2++;
                ele_2 = nums[i];
            } else if (nums[i] == ele_1) {
                counter_1++;
            } else if (nums[i] == ele_2) {
                counter_2++;
            } else {
                counter_1--;
                counter_2--;
            }
        }

         counter_1 = 0 , counter_2 = 0;
        for(int i = 0 ; i < n ;i++)
        {
            if(nums[i]==ele_1)counter_1++;
            else if(nums[i]==ele_2)counter_2++;
        }
        vector<int>ans;
        if(counter_1>(n/3))ans.push_back(ele_1);
        if(counter_2>(n/3))ans.push_back(ele_2);
        return ans;
    }
};