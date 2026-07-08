#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    //  vector<int>nums={1,2,3,4,2,6,7,8};
     vector<int>nums={1,1,1,3,4,2,7,8};
    bool flag = true;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "Array Is Sorted";
    else
        cout << "not sorted";
    return 0;
}