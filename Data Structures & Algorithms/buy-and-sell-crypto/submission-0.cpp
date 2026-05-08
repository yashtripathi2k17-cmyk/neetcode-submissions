class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxiprofit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxiprofit=max(maxiprofit,prices[i]-mini);
        }
        return maxiprofit;
    }
};
