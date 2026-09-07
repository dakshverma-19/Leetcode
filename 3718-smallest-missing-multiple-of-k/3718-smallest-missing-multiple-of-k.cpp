class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        for (int i = 1; i <= nums.size()+1; i++) {
            bool ans = true;
            for (int y = 0; y < nums.size(); y++) {

                if (k * i == nums[y]) {
                    ans = false;
                    break;
                }
            }

            if (ans == true) {
                return (k * i);
            }
        }
        return -1;
    }
};