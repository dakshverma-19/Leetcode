class Solution {
public:
    int minMoves(vector<int>& nums) {
        int largest=INT_MIN;
        int ans=0;
        for(int i=0 ; i<nums.size() ; i++){
        largest=max(largest,nums[i]);
        }
        for(int j=0 ; j<nums.size() ; j++){
            if(nums[j]<largest){
                while(nums[j]<largest){
                    nums[j]=nums[j]+1;
                    ans=ans+1;
                }

            }
        }
        return ans;
    }
};