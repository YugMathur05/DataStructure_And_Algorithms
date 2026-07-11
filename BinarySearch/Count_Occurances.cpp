#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 4, 4, 4, 5, 6, 6, 7};
    int n = nums.size();
    int target;
    cout << "Enter the target value :" << endl;
    cin >> target;
    int high = n - 1;
    int low = 0;
    int firstOccurance = -1;
    int lastOccurance = -1;
    // finding first occurance
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            firstOccurance = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    high = n - 1, low = 0;
    // finding last occurance
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            lastOccurance = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "The Element " << target << " occurance " << (lastOccurance - firstOccurance + 1) << " times in the array";
    return 0;
}