class Solution {
public:
    int findMin(vector<int>& nums) {
        int p=INT_MAX;
        for(int i=0 ; i<nums.size() ; i++){
            p=min(p,nums[i]);

        }
        return p;
    }
};