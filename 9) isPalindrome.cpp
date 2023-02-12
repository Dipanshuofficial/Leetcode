class Solution {
public:
    bool isPalindrome(int x) {
        string m=to_string(x);
        reverse(m.begin(),m.end());
        string org=to_string(x);
        return m==org;
    }
};
