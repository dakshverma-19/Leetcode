class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        vector<int>answer;
        for(int i=0 ; i<nums.size() ; i++ ){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
        }
        for(int j=0 ; j<positive.size() ; j++){
            answer.push_back(positive[j]);
            for(int k=j ; k<=j ; k++){
             answer.push_back(negative[k]);
            }
        }
        return answer;
    }
};