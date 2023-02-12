class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        vector<long long> v(nums.begin(),nums.end());
        
        long long sum=0;
        int n = v.size();
        for (int i = 0; i < n/2; i++) {
            string s = to_string(v[i]) + to_string(v[n-i-1]);
            sum += stoll(s);
        }
        if (n % 2 == 1) {
            sum += v[n/2];
        }
        return sum;
    }
};
