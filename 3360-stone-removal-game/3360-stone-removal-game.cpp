class Solution {
public:
    bool canAliceWin(int n) {
        int sum = 0;
        if (n < 10) {
            return false;
        }
        for (int i = 10; i > 0; i--) {
            if (n < i) {
                break;
            }
            n = n - i;
            sum = sum + 1;
        }
        if (sum % 2 == 0) {
            return false;
        }
        return true;
    }
};