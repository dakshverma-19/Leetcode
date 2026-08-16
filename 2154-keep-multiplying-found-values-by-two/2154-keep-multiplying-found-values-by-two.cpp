class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       int k = original;
        for(int i=0 ;i<nums.size() ; i++){
            for(int j=0 ; j<nums.size() ; j++){
            if(nums[j]==original){
               original=2*original;
            }
            }
        }
        if(original==k){
            return k ;
        }
        return original;
    }
};