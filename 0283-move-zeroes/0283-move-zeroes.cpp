class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int l = nums.size();
        vector<int> ans;
        for (int i = 0; i < l; i++) {
            if (nums[i] == 0) {
                nums.push_back(0);
                ans.push_back(i);
                // nums.erase(nums.begin() + i);
            }
        }

        for (int y = ans.size() - 1; y >= 0; y--) {
            nums.erase(nums.begin() + ans[y]);
        }
    }
};