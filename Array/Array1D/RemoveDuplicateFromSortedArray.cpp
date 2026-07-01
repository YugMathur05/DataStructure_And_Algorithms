//BruteForce Approach   || Using Ordered Sets
// T.C will be : O(nlogn) || S.C will be O(n)
/*
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={1,2,3,3,4,4,5,6,6,7,7,7,8,9,10};
    int n=nums.size();
    set<int>uniqueElements;
    for(auto x:nums)
    {
        uniqueElements.insert(x);
    }
    int i=0;
    for(int ele:uniqueElements)
    {
        nums[i]=ele;
        i++;
    }
    cout<<i<<" Elements form begining give a unique Elements"<<endl;
    for(auto x:nums)
    {
        cout<<x<<" ";
    }
    return 0;
}
*/
// Optimal Solution || Using Two Pointer Approach
//  T.C will be : O(n) || S.C will be O(1)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 7, 8, 9, 10};
    int n = nums.size();
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(nums[j]!=nums[i])
        {
            nums[i+1]=nums[j];
            i++;
        }
    }
    cout << i+1 << " Elements form begining give a unique Elements" << endl;
    for (auto x : nums)
    {
        cout << x << " ";
    }
    return 0;
}