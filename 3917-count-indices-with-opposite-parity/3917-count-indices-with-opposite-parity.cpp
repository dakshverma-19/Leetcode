class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {
            int ans = 0;

            for(int j = i + 1; j < nums.size(); j++) {

                if(nums[i] % 2 != 0) {
                    if(nums[j] % 2 == 0) {
                        ans++;
                    }
                }
                else {
                    if(nums[j] % 2 != 0) {
                        ans++;
                    }
                }
            }

            result.push_back(ans);
        }

        return result;
    }
};