class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int ans=0;
        int sum=0;
      if(nums.size()==1){
        return true;
      } 
      if(nums.size()==2){
        if(nums[0]%2 ==0 && nums[1]%2!=0  || nums[1]%2 ==0 && nums[0]%2!=0){
            return true;
        }else{
            return false;
        }
      } 
      for(int i=1 ; i<nums.size() ; i++){
        if(nums[i]%2 ==0 && nums[i-1]%2!=0  || nums[i-1]%2 ==0 && nums[i]%2!=0){
        ans=ans+1;

      }else{
        sum=sum+1;
      }
      }
      if(sum>0){
        return false;
      }
      return true;
    }
};