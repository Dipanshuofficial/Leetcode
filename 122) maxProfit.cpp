class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int low=prices[0],high=prices[0];
        
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>high){
                high=prices[i];
            }
            else{
                ans+=(high-low);
                low=prices[i];
                high=prices[i];
            }
        }
        
        if(high>low) ans+=(high-low);
        
        return ans;
    }
};
