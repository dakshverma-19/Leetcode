class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int answer=0;
    sort(nums.begin(),nums.end());
    for(int i=0 ;i<nums.size() ; i++){
        for(int j=i+1; j<nums.size() ;j++){
            if(nums[i]<nums[j] && abs(nums[i]-nums[j])==k){
                answer=answer+1;              
        }
        }
    }
    return answer;
    }
};