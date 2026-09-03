class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      vector<int>ans;
      if(nums.size()==1){
        ans.push_back(nums[0]);
        return ans;
      }  
      for(int i=0 ; i<nums.size() ; i++){
        if(nums[i]%2==0){
            ans.push_back(nums[i]);
        }
      }
      for(int y=0 ;y<nums.size() ; y++){
        if(nums[y]%2!=0){
            ans.push_back(nums[y]);
        }
      }
      return ans;
    }
};