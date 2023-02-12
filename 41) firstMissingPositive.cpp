class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        set<long long> s(nums.begin(),nums.end());
        if(s.count(1)==0) return 1;
        for(unsigned long long int i=1;i<=*s.end()+1;i++){
            if(s.count(i)==0) return i;
        }
        return 0;
    }
};
