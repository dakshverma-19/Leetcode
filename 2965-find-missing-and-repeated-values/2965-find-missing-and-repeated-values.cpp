class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        vector<int> answer;
        int t;
        for (int i = 0; i < grid.size(); i++) {
            for (int y = 0; y < grid[i].size(); y++) {
                ans.push_back(grid[i][y]);
            }
        }
        sort(ans.begin(), ans.end());
        for (int p = 0; p <ans.size()-1 ; p++) {
            if (ans[p] == ans[p + 1]) {
                answer.push_back(ans[p]);
            }
        }
        for (int a = 1; a <=ans.size(); a++) {
            bool found=false;
            for (int z = 0; z < ans.size(); z++) {
                if (a == ans[z]) {
                    found=true;
                    break;
                }
            }
            if(found==false){
            answer.push_back(a);
            break;
            }
        }
        return answer;
    }
};