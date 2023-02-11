//Brute-Force Approach
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
    int n = grid.size();
    int c=0;
    unordered_map<int, vector<pair<int, int>>> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                mp[1].emplace_back(i, j);
            }
            else c=1;
        }
    }
    if (mp.count(1) == 0 || c==0) return -1;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 0) {
                int m = INT_MAX;
                for (auto [x, y] : mp[1]) {
                    int d = abs(x - i) + abs(y - j);
                    m = min(m, d);
                }
                ans = max(ans, m);
            }
        }
    }
    return ans;
}
};
