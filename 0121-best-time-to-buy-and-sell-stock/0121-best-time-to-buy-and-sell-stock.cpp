class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int lowest =prices[0];
        int mostp=0;
        for(int i =0;i<n;i++){
            int present = prices[i];
                lowest= min(prices[i],lowest);
            int profit = (present - lowest);
            mostp=max(mostp,profit);
        }
        return mostp;
    }
};