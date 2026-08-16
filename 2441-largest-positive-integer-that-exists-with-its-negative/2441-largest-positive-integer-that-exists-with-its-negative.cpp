class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int j = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            for (int y = i + 1; y < nums.size(); y++) {
                if (nums[i] == -(nums[y])) {
                    j = max(j, abs(nums[i]));
                   
                    
                }

                
            }
        }
       if(j==INT_MIN){
        return -1;
       }
        return j;
    }
};