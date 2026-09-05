class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int sum = 0;

        for (int i = 1; i <= arr[arr.size() - 1]; i++) {
            bool found = false;

            for (int y = 0; y < arr.size(); y++) {
                if (i == arr[y]) {
                    found = true;
                    break;
                }
            }

            if (found == false) {
                sum++;

                if (sum == k) {
                    return i;
                }
            }
        }

        return arr[arr.size() - 1] + (k - sum);
    }
};