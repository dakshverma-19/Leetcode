class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int sum=0;
            int s=nums.size();
            int h=s/2;
            for(int i=0; i<nums.size() ; i++){
            if(nums[i] == nums[h]){
                sum=sum+1;
            }
            }
            if(sum==1){
                return true;
            }
        
        return false;
    }
};
