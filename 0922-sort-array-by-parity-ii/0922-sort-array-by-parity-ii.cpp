class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>positive;  //even 
        vector<int>negative;  // odd
        vector<int>answer;
        for(int i=0 ; i<nums.size() ; i++ ){
            if(nums[i]%2!=0){
                negative.push_back(nums[i]);  //odd
            }
            if(nums[i]%2==0){
                positive.push_back(nums[i]);   //even
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