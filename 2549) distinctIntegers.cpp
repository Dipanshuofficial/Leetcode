class Solution {
public:
    int distinctIntegers(int n) {
        queue<int> som;
        set<int> s;
        som.push(n);
        int ans;
        while(!som.empty()){
            int t=som.front();
            som.pop();
            s.insert(t);
            ans++;
            for(int i=1;i<=t;i++){
                if(t%i==1){
                    som.push(i);
                }
            }
            
        }
    return s.size();
    }
};
