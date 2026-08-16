class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        if (nums.size() == 2) {
            ans.push_back(nums[0]);
            ans.push_back(nums[1]);
            return ans;
        } else {

            if (nums[0] != nums[1]) {
                ans.push_back(nums[0]);
            }
            nums.push_back(0);
            for (int i = 1; i < nums.size() - 1; i++) {
                if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1]) {
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};