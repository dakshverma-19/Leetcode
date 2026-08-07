class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>rev;

        for( int j=0 ; j<nums.size() ; j++){
            rev.push_back(nums[j]);
        }



        for ( int i=nums.size()-1 ; i>=0; i-- ){
                rev.push_back(nums[i]);    

        }
        return rev;
    }
};