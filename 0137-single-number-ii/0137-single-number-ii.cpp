class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int p;
        nums.push_back(0);
        nums.insert(nums.begin()+0,-1);
        for(int i=1 ; i<nums.size()-1 ; i++){
            if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
                 p=nums[i];
            }

        }
        return p;
    }
};