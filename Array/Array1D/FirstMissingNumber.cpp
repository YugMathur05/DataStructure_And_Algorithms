//Brute Force Approach
// T.C = o(n) S.C = O(n)
#include <iostream>
#include <vector>
    using namespace std;

int main()
{
    vector<int> nums = {1, 2, 4, 5};

    int n = nums.size() + 1;

    vector<int> hasharr(n + 1, 0);

    for (int i = 0; i < nums.size(); i++)
    {
        hasharr[nums[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hasharr[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
//_____________________________________________________________________
// Optimal Approach 1: using maths formula T.C=o(n) S.C=O(1)
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1,2,4,5};
    int n = nums.size()+1;
    // calculating sum
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    int total = n * (n + 1) / 2;
    cout << "the first missing number is " << (total - sum) << endl;
    return 0;
}
*/
