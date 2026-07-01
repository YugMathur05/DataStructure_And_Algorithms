// Brute Force Approach
// Right Rotate By K Steps

// Time Complexity O(n)
// Space Complexity O(k)(Worst case : O(n))
/*

#include <iostream>
#include <vector>
    using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    int n = nums.size();
    int k;

    cout << "Enter the value of k: ";
    cin >> k;

    k = k % n;

    if (k == 0)
    {
        for (int x : nums)
            cout << x << " ";
        return 0;
    }

    vector<int> extraArr;

    // Store last k elements
    for (int i = n - k; i < n; i++)
    {
        extraArr.push_back(nums[i]);
    }

    // Shift remaining elements to the right
    for (int i = n - k - 1; i >= 0; i--)
    {
        nums[i + k] = nums[i];
    }

    // Copy saved elements to the beginning
    for (int i = 0; i < k; i++)
    {
        nums[i] = extraArr[i];
    }

    // Print rotated array
    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}
*/
//_______________________________________________________
// Optimal Solution
// Time Complexity O(n)
// Space Complexity O(1)

#include <iostream>
#include <vector>
using namespace std;
void ReverseArr(int startPos, int endPos, vector<int> &arr)
{
    while (startPos < endPos)
    {
        swap(arr[startPos], arr[endPos]);
        startPos++, endPos--;
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    int n = nums.size();
    int k;

    cout << "Enter the value of k: ";
    cin >> k;
    // here k=k%n is used to keep the number of rotations within the array size, because rotating by n or its multiples leaves the array unchanged.
    k = k % n;                                       
    // if k is equal to size of array we return the array without any change
    if (k == n)
    {
        for (int ele : nums)
        {
            cout << ele << " ";
        }
        return 0;
    }
    // now reverse array from 0 to (n-k-1)th position
    ReverseArr(0, n - k - 1, nums);
    // now reverse array from (n-k) to (n)th position
    ReverseArr(n - k, n - 1, nums);
    // now reverse array from 0 to (n-1)th position
    ReverseArr(0, n - 1, nums);

    for (int ele : nums)
    {
        cout << ele << " ";
    }
    return 0;
}