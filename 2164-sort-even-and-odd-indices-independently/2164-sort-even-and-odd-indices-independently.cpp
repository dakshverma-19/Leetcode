class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        vector<int>answer;
        for(int i=0 ; i<nums.size() ; i++ ){
            if(i%2!=0){
                negative.push_back(nums[i]);  //odd
            }
            if(i%2==0){
                positive.push_back(nums[i]);   // even 
            }

        }
        sort(positive.begin() , positive.end());
        sort(negative.begin() , negative.end());
        reverse(negative.begin() , negative.end());

        for(int j=0 ; j<positive.size() ; j++){
            answer.push_back(positive[j]);
             if(j < negative.size()){
        answer.push_back(negative[j]);
    }
        }
        return answer;
    }
};