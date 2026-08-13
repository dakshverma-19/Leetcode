class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        int k;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size() ; i++){
            if(nums[i] != i){
                 k=i;
                 break;
            }
        }
        return k;
    }
};