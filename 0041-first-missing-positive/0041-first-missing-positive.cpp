class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0 ; i<nums.size();i++){
            //while(nums[i]>=j){
            if(nums[i]==j){
                j++;
                }//else{
                    //return j;
                
           // }
            
        }
        return j;
    }
};