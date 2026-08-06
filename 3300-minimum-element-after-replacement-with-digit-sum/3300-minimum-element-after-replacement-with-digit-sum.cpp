class Solution {
public:
    int minElement(vector<int>& nums) {
        
        int mini=INT_MAX ;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int sum = 0;
            while (num > 0) {
                int x = num % 10;
                 sum = sum + x;
                num  = num/10;
            }
            
            if(sum<mini){
                mini=sum;
            }
            
        }
        return mini;
    }
};
        


        
    
