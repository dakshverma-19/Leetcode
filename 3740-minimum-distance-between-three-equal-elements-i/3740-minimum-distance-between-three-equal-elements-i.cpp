class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int answer = INT_MAX;
        int digit;
        int sum;

        if (nums.size() < 3) {
            return -1;
        }
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int y = 0; y < nums.size(); y++) {
                if (nums[i] == nums[y]) {
                    sum = sum + 1;
                }
            }
            if (sum >= 3) {
                vector<int> ans;
                digit = nums[i];
                for (int u = 0; u < nums.size(); u++) {
                    if (nums[u] == digit) {
                        ans.push_back(u);
                    }
                }

                for (int j = 0; j + 2 < ans.size(); j++) {
                    int q = ans[j];
                    int w = ans[j + 1];
                    int e = ans[j + 2];

                    int distance = abs(q - w) + abs(w - e) + abs(e - q);

                    answer = min(answer, distance);
                }
            }
        }
        if (answer == INT_MAX) {
            return -1;
        }
        return answer;
    }
};