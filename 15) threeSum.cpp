class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> se;
        unordered_map<int,int> mp;
        int s=nums.size();
        for(int k=0;k<s;k++){
            mp[nums[k]]=k;
        }
        if(mp.size()==1 && mp.begin()->first==0){
            return {{0,0,0}};
        }
        // vector<int> unq;
        for(int i=0;i<s;i++){
            for(int j=0; j<s; j++){
                int k=mp[0-(nums[i]+nums[j])];
                    if(i!=j && j!=k && k!=i && nums[i]+nums[j]+nums[k]==0){
                        vector<int> l;
                        l={nums[i],nums[j],nums[k]};
                        sort(l.begin(),l.end());
                        if(se.count(l)==0){
                            ans.push_back({nums[i],nums[j],nums[k]});
                            se.insert(l);
                        }
                    }
            }
        }
        return ans;
    }
};
