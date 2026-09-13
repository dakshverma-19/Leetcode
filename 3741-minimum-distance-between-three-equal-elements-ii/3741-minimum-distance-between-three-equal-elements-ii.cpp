class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size() < 3){
            return -1;
        }

        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++){
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int ans = INT_MAX;

        for(int i = 0; i + 2 < arr.size(); i++){

            if(arr[i].first == arr[i+1].first &&
               arr[i+1].first == arr[i+2].first){

                int a = arr[i].second;
                int b = arr[i+1].second;
                int c = arr[i+2].second;

                int distance = abs(a-b) + abs(b-c) + abs(c-a);

                ans = min(ans, distance);
            }
        }

        if(ans == INT_MAX){
            return -1;
        }

        return ans;
    }
};