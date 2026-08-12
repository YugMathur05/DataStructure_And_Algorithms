class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        nums1.resize(n+m);
       int i=n-1;
       int j=m-1;
       int k=m+n-1;
       while(i>=0&&j>=0)
       {
        if(nums1[i]>nums2[j])
        {
            nums1[k]=nums1[i];
            i--,k--;
        }
        else
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
       if((n+m)%2==0)
       {
        return (nums1[((n+m)/2)-1 ]+nums1[((n+m)/2)])/2.0;
       }
       else
       {
        return nums1[(n+m)/2];
       }
    }
};