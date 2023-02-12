class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int x=(nums1.size()/2)-1;
        if(nums1.size()%2==0){
            double ans=(nums1[x]+nums1[x+1]);
            // cout<<nums1[x]<<" "<<nums1[x+1];
            return ans/2;
        }
        // cout<<nums1[x+1];
        return nums1[(x)+1];
    }
};
