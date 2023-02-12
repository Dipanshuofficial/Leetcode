class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        unordered_set<char> mp(s.begin(),s.end());
        if(mp.size()==1) return 1;
        else if(mp.size()==s.size()) return s.size();
        for(int i=0;i<s.size();i++){
            int a=0;
            mp.clear();
            for(int j=i;j<s.size();j++){
                if(mp.count(s[j])==0){
                    a++;
                    mp.insert(s[j]);
                }
                else{
                    break;
                }
            }
            ans=max(ans,a);
        }
        return ans;
    }
};
