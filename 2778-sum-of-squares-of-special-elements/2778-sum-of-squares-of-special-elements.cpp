class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int>ans;
        int answer=0;
        int n=nums.size();
        for(int i=1 ; i<=nums.size() ; i++){
            if(n%i==0){
          
                ans.push_back(nums[i-1]);
            }
        }
        for(int j=0 ; j<ans.size() ; j++){
            answer=answer+ans[j]*ans[j];
        }

        return answer;
    }
};