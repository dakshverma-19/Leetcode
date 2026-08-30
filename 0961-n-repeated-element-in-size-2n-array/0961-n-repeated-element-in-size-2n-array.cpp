class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int y;
      sort(nums.begin(),nums.end());
      nums.push_back(-1);
      for(int i=0 ;i<nums.size()-1 ; i++){
        if(nums[i]==nums[i+1]){
             y=nums[i];
            break;
        }
      }  
      return y;
    }
};