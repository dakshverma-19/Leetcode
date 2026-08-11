class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer(prices.size());
        int ans=0;
        for (int i = 0; i < prices.size(); i++) {
            answer[i] = prices[i];
            for (int j = i + 1; j < prices.size(); j++) {

                if (prices[j] <= prices[i]) {
                    ans= prices[i] - prices[j];
                    answer[i]=ans;
                    break;
                }
            }
            
        }
        return answer;
    }
};