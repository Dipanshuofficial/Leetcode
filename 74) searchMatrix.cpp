class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                mp[matrix[i][j]]++;
            }
        }
        if(mp[target]==0) return false;
        return true;
    }
};
