class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2){
            return 0;
        }
        int y=INT_MIN;
        for(int i=0 ; i<nums.size()-1 ; i++){
            y=max(y,abs(nums[i]-nums[i+1]));

        }
        return y;
    }
};