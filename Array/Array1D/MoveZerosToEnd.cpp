// brute force Approach using extra array
// T.C O(n) || S.C O(n)
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 0, 2, 0, 3, 4, 0, 0, 5, 8, 0, 4, 0};
    int n = nums.size();
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < temp.size())
        {
            nums[i] = temp[i];
        }
        else
        {
            nums[i] = 0;
        }
    }
    for (int ele : nums)
    {
        cout << ele << " ";
    }
    return 0;
}
*/

// Optimal Solution using Two Pointer Approach
//  T.C O(n) || S.C O(1)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 0, 2, 0, 3, 4, 0, 0, 5, 8, 0, 4, 0};
    int n = nums.size();
    int idx=-1;
   for(int i=0;i<n;i++)
   {
    if(nums[i]==0)
    {
        idx=i;
        break;
    }
   }
    
   for(int i=idx+1;i<n;i++)
   {
    if(nums[i]!=0){
        swap(nums[i],nums[idx]);
        idx++;
    }
   }

   for(int ele:nums)
   {
    cout<<ele<<" ";
   }
    return 0;
}