class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp, np;
        mp.insert(pair<char,int>('I',1));
        mp.insert(pair<char,int>('V',5));
        mp.insert(pair<char,int>('X',10));
        mp.insert(pair<char,int>('L',50));
        mp.insert(pair<char,int>('C',100));
        mp.insert(pair<char,int>('D',500));
        mp.insert(pair<char,int>('M',1000));
        int sum=0;
        // for(int i=0;i<s.size();i++){
        //     np[s[i]]=i;
        // }
        for(int j=0;j<s.size();j++){
            if(mp[s[j]]<mp[s[j+1]]){
                sum=sum-mp[s[j]];
            }
            else{
                sum+=mp[s[j]];
            }
        }
        return sum;
    }
};
