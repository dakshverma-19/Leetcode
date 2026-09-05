class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int y = i + 1; y < nums.size(); y++) {
                if (nums[i] == nums[y]) {
                    sum = sum + 1;

                    i++;
                    break;
                }
            }
        }
        ans.push_back(sum);
        int y = nums.size() - (sum * 2);
        ans.push_back(y);
        return ans;
    }
};