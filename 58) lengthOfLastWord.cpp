class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int z=s.size()-1;
        while(s[z]==' '){
            z--;
        }
        for(int i=z;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            c++;
        }
        return c;
    }
};
