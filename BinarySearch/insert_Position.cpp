#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 4, 5, 7};
    int n = nums.size();
    int target;
    cout << "Enter the target value :" << endl;
    cin >> target;
    int high = n - 1;
    int low = 0;
    int ans = n;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    cout << "The insert position of the element will be : " << ans;
    return 0;
}