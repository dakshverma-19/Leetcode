class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int size = nums.size();

        int answer = 1;
        for (int i = 0; i < size; i++) {
            int n = nums[i];
            int sum = 0;
            while (n > 0) {
                int k = n % 10;
                sum = (sum * 10) + k;
                n = n / 10;
            }
            nums.push_back(sum);
            
        }
        sort(nums.begin(),nums.end());
       
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                answer++;
            }
        }
        return answer;
    }
};