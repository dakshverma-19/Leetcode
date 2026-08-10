class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int q = INT_MIN;
        int y = nums.size();
        int j = nums[0];
        int k = nums[nums.size()-1];
        for(int i=1; i<=j ; i++){
            if(j%i==0 && k%i==0){
              q=max(q,i);
            }
        }
        return q;
    }
};