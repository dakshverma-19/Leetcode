class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int k = INT_MIN;
        int n = candies.size();
        for (int i = 0; i < n; i ++) {
        if (k < candies[i]) {
            k = candies[i];
        }
        }

            for (int p = 0; p < n; p ++) {
                if (candies[p] + extraCandies >= k) {
                    ans.push_back(true);
                } else {
                    ans.push_back(false);
                }
            }
        
        return ans;
    }
};