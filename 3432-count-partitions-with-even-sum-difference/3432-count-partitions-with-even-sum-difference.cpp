class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int answer = 0;
        int ans = 0;
        for (int i = 0; i < nums.size()-1; i++) {

            answer = answer + nums[i];
            int panswer = 0;
            for (int j = i + 1; j < nums.size(); j++) {

                panswer = panswer + nums[j];
            }
            if ((answer - panswer) % 2 == 0) {
                ans = ans + 1;
            }
        }

        return ans;
    }
};