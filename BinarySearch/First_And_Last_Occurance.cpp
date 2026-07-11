// Brute force approach T.C = O(N) using linear search
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 4, 4, 4, 5, 6, 12, 12, 20};
    int n = nums.size();
    int first = -1;
    int second = -1;
    int target;
    cout << "enter the target value :" << endl;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1) first = i;
            second = i;
        }
    }

    cout << "The first occurance of target value is " << first << " and second occurance was " << second;

    return 0;
}

//Optimal solution using binary search T.C = O(logN)
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int high = n - 1;
        int low = 0;
        int first = -1, last = -1;
        // finding first occurance
        while (high >= low)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                first = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        // reset high and low pointers
        high = n - 1, low = 0;

        // finding last occurance
        while (high >= low)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
            {
                last = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return {first, last};
    }
};