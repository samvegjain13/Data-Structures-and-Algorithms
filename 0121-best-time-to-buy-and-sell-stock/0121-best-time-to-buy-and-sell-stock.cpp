class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,buy=prices[0],sell=0;
        for(i=0;i<prices.size();i++){  
            sell= max(sell,prices[i]-buy);
            buy = min(buy,prices[i]);
        } return sell;
    }
};