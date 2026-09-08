class Solution {
public:
    bool isThree(int n) {
        int sum = 2;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                sum = sum + 1;
            }
        }
        if (sum == 3) {
            return true;
        }
        return false;
    }
};