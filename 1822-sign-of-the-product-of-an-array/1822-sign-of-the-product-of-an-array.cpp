class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sum = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                return 0;
            }

            if(nums[i] < 0){
                sum = sum * -1;
            }
        }

        return sum;
    }
};