class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int y = nums.size() - 2; y >= 0; y--) {
            if(nums[y] == nums[y + 1]) {
                nums.erase(nums.begin() + y);
            }
        }

        return nums.size();
    }
};
