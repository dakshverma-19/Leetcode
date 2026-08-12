class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans = 0;
        
        sort(nums.begin(), nums.end());

        int last = nums[nums.size() - 1];

        for(int i = 0; i < k; i++) {
            ans += last;
            last++;
        }

        return ans;
    }
};