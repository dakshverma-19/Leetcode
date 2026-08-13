class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>ans;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                ans.push_back(nums[i]);
            }
        }
        if (ans.size() == 0) {
            return 0;
        }
        int sum=0;
        for(int j=0 ; j<ans.size() ; j++){
          sum = sum+ans[j];
        }
        int answer=sum/ans.size();
        return answer;
    }
};