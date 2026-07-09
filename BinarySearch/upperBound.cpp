// Upper Bound: First element that is greater than to the target.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 4, 5, 6, 12, 30, 45};
    int n = nums.size();
    int target;
    cout << "enter the target element " << endl;
    cin >> target;
    int high = n - 1;
    int low = 0;
    int ans = n;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (ans == n)
    {
        cout << "Upper Bound doesn't exist.";
    }
    cout << "The Upper Bound of " << target << " is : " << nums[ans] << " at index " << ans;
    return 0;
}