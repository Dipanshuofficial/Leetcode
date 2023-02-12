class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto x=unique(nums.begin(),nums.end());
        while(nums.size()>distance(nums.begin(),x)){
            nums.pop_back();
        }
        return distance(nums.begin(),x);
    }
};
