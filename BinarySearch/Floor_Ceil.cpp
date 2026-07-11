// Floor is the larget element in the array i.e <= target
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
    int ans = -1;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] <= target)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    if (ans == -1)
    {
        cout << "Floor doesn't exist";
    }
    else cout << "The floor element will be : " << nums[ans];
    return 0;
}

//__________________________________________________________________________
// Ceil is the smallest element in the array i.e >= target
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
    int ans = -1;
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
    if (ans == -1)
    {
        cout << "ceil doesn't exist";
    }
    else
        cout << "The ceil element will be : " << nums[ans];
    return 0;
}