class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l, h, ans=0;
        l=0;
        h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]>=target){
                // if(nums[mid]==target){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
                ans=mid+1;
            }
        }
        return ans;
    }
    
};
