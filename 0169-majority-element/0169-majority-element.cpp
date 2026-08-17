class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int n = nums.size();
      int count = 0 ;
      int ele = -1;
      for(int i = 0;i < n;i++)
      {
        if(count==0)
        {
            ele=nums[i];
            count++;
        }
        else if (nums[i]!=ele)count--;
        else{
            count++;
        }
      }   
      return ele;
    }
};