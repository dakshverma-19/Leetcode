class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        vector<int> ans;

        int total = 0;

        for (int i = 0; i < nums.size(); i++) {
            int m = INT_MIN;
            int sum = 0;
            int answer = 0;
            while (nums[i] > 0) {
                int k = nums[i] % 10;
                m = max(m, k);
                nums[i] = nums[i] / 10;
                sum = sum + 1;
            }
            for (int r = 0; r < sum; r++) {
                answer = (answer * 10) + m;
            }
            ans.push_back(answer);
        }
        for (int t = 0; t < ans.size(); t++) {
            total = total + ans[t];
        }
        return total;
    }
};