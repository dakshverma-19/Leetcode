class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> arr;
        int j = 1;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                arr.push_back(nums[i]);
            }
        }
        arr.push_back(nums[nums.size() - 1]);

        sort(arr.begin(), arr.end());
        while (j <= size) {
           if (!binary_search(arr.begin(), arr.end(), j)){
            ans.push_back(j);
        }
        j++;
        }
        return ans;
    }
};