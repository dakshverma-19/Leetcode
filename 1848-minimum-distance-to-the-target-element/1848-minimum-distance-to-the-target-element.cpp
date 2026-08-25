class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans;
        int k=INT_MAX;
        for(int i=0 ;i<nums.size() ; i++){
            if(nums[i]==target){
                ans=abs(i-start);
                k=min(k,ans);
            }
        }
        return k;
    }
};