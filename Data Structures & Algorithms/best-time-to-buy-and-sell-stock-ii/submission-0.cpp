class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int totalprofit=0;
        for(int i=0;i<prices.size();i++){
            if(mini==INT_MAX){
                mini=prices[i];
            }
            else if(prices[i]<mini){
                mini=prices[i];
            }
            else{
                if(prices[i]>mini){
                    totalprofit+=prices[i]-mini;
                    mini=prices[i];
                }
            }
        }
        return totalprofit;
    }
};