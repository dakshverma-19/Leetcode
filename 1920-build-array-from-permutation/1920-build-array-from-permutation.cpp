class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        vector<int>ans;
        vector<int>tak(nums.size());
       for (int i = 0 ; i < nums.size() ; i++){
        tak[i] = nums[nums[i]];
        ans.push_back(tak[i]);

       } 
       return ans;
    }
};