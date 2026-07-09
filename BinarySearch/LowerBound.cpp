// Lower Bound: First element that is greater than or equal to the target.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>nums={1,2,4,5,6,12,30,45};
    int n=nums.size();
    int target;
    cout<<"enter the target element "<<endl;
    cin>>target;
    int high = n-1;
    int low = 0;
    int ans=n;
    while(high>=low)
    {
        int mid = low+(high-low)/2;
        if(nums[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    if (ans == n)
    {
        cout << "No Lower Bound exists";
    }
    cout<<"The Lower Bound of "<<target<<" is : "<<nums[ans]<<" at index "<<ans;
    return 0;

}