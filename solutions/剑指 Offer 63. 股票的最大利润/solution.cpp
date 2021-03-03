class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyIdx = 0, maxSoFar = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < prices[buyIdx]) buyIdx = i;
            else maxSoFar = max(maxSoFar, prices[i] - prices[buyIdx]);
        }
        return maxSoFar;
    }
};