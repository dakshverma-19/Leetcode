class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int large=INT_MIN;
        int index;
        for(int y=0 ;y<nums.size() ; y++){
            large=max(large,nums[y]);
        }
        for(int t=0 ; t<nums.size() ; t++){
            if(nums[t]==large){
                index=t;
            }
        }

        sort(nums.begin(),nums.end());
        
        for(int i=0 ;i<nums.size()-1 ; i++){
            if(nums[i]*2>large){
                return -1;
            }
        }
        return index;
    }
};