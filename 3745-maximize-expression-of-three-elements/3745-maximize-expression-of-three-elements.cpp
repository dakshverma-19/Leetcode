class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        int y=nums[nums.size()-2];
        int p=nums[0];
        int ans;
        ans=n+y-(p);
        return ans;

    }
};