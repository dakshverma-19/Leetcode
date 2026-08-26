class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin() , nums.end());
        int m = nums[nums.size()-k];
        return m; 
    }
};