class Solution {
public:
    void mergeSortedArray(vector<int>&nums1,vector<int>&nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        int i = n-1;
        int j = m-1;
        int k = (m+n)-1;
        nums1.resize(n+m);
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i];
                i--,k--;
            }else
            {
                 nums1[k]=nums2[j];
                j--,k--;
            }
        }
        while(j>=0)
        {
             nums1[k]=nums2[j];
                j--,k--;
        }
          while(i>=0)
        {
             nums1[k]=nums1[i];
                i--,k--;
        }
  
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       mergeSortedArray(nums1,nums2);
        int n = nums1.size();
        if(n%2==0)
        {
            return (nums1[n/2]+nums1[(n-1)/2])/2.0;
        }else 
        return nums1[n/2];
        
    }
};