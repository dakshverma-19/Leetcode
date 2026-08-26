class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>ans;
        int p;
        int q;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            p=max(nums[0],nums[1]);
            return p;
        }
        
        sort(nums.begin() , nums.end());
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            
            if (nums[i] != nums[i - 1]) {
                ans.push_back(nums[i]);
            }
        }
        if(ans.size()==2){
            q=max(ans[0],ans[1]);
            return q;
        }
        if(ans.size()==1){
            return ans[0];
        }
        return ans[ans.size()-3];
    }
};