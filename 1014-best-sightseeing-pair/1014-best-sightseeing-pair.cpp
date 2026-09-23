class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int large = INT_MIN;
        int best = values[0];

        for (int j = 1;  j < values.size(); j++) {
            large = max( large, best + values[j] - j );
            best = max (best, values[j] + j);
        }

        return large;
    }
};
