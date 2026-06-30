// Brute Force Approach
// T.C = O(nlogn)
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {1, 4, 3, 0, 34, 45, 23, 4, 53, 232, 35, 364};
    int n = v.size();
    sort(v.begin(), v.end());

    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] != v[n - 1])
        {
            cout << "Second Largest Element is " << v[i];
            break;
        }
    }
        return 0;
}
*/
//__________________________________________________________________________________________
// Optimal Approach T.C = O(n)
#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;
int main()
{
    vector<int> v = {1, 4, -3, 0, 34, 45, 23, 4, 53, -2392, 35, 364};
    int n = v.size();
    int largest=v[0];
    int slargest=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(v[i]>largest)
        {
            slargest=largest;
            largest=v[i];
        }
        else if(v[i]<largest && v[i]>slargest)
        {
            slargest=v[i];
        }
    }
    cout<<"The Second Largest Element Is "<<slargest;
    return 0;
}