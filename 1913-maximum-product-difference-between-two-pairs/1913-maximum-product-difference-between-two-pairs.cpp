class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first = nums[0];
        int second = nums[1];

        int last=nums[nums.size()-1];
        int beforelast=nums[nums.size()-2];

        int q=(first*second);
        int i=(last*beforelast);

        int answer=q-i;
        int l =abs(answer);
        return l;
    }
};