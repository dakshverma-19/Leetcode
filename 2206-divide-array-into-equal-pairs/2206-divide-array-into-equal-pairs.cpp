class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        int k;
        int ans = 0;
        if (n % 2 != 0) {
            return false;

        } else {
            sort(nums.begin(), nums.end());
            // 1,1,1,1,2,2,2,5,5,5,7,7
            for (int i = 0; i < n - 1; i=i+2) {

                if (nums[i] != nums[i + 1]) {
                    return false;
                }
            }
        }
        return true;
    }
};