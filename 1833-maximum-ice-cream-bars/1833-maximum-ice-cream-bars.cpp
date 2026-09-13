class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        long long ans = 0;
        int sum = 0;

        sort(costs.begin(), costs.end());

        for (int i = 0; i < costs.size(); i++) {
            if (ans + costs[i] <= coins) {
                ans = ans + costs[i];
                sum = sum + 1;
            } else {
                break;
            }
        }

        return sum;
    }
};