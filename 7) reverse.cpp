class Solution {
public:
    int reverse(int x) {
        string s;
        s=to_string(x);
        if(s[0]=='-'){
            std::reverse(s.begin()+1,s.end());
        }
        else{
            std::reverse(s.begin(),s.end());
        }
        if(stol(s)>pow(2,31)-1 || stol(s)<pow(-2,31)){
            return 0;
        }
        return stol(s);
    }
};
