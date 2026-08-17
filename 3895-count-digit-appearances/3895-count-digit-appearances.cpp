class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i=0 ; i<nums.size() ; i++){
            while(nums[i]>0){
               int k=nums[i]%10;
                if(k==digit){
                    ans=ans+1;
                }
                nums[i]=nums[i]/10;
            }
        }
        return ans;
    }
};