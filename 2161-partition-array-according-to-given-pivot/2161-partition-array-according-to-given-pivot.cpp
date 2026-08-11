class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans1;
        vector<int>ans2;
        vector<int>ans3;
        vector<int>answer;

        for(int i=0 ; i<nums.size();i++){
            if(nums[i]<pivot){
                ans1.push_back(nums[i]);

            }else if (nums[i]==pivot){
                ans2.push_back(nums[i]);

            }else{
                ans3.push_back(nums[i]);
            }
        }
        for(int j=0 ; j<ans1.size();j++){
            answer.push_back(ans1[j]);
        }
        for(int l=0 ; l<ans2.size();l++ ){
            answer.push_back(ans2[l]);
        }  
        for(int h =0 ; h<ans3.size();h++){
            answer.push_back(ans3[h]);
        }
        return answer;
    }
};