class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum=0;
        
        
        for(int i=0;i<k;i++){
            sort(gifts.begin(),gifts.end());
            long long max=sqrt(gifts.back());
            gifts.pop_back();
            gifts.push_back(max);
            
        }
        for(auto x: gifts){
            sum+=x;
        }
        return sum;
    }
};
