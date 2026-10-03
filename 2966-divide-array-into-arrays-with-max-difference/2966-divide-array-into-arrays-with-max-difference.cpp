class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> answer;
        vector<vector<int>>empty;
        vector<int> ans;
        int sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + 1;
            ans.push_back(nums[i]);
            
            if (sum == 3) {
                sum = 0;
                answer.push_back(ans);
                ans.clear();
            }
        }
        for(int y=0 ; y<answer.size() ; y++){
            if(abs(answer[y][0]-answer[y][2])>k){
                return empty;
                break;
            }
        }
        return answer;
    }
};