class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int y = 1;
        int k = 1;
        for (int i = 0; i < n; i++) {
            sum = sum + k;
            k++;
            if (k==y+7) {
                y++;
                k = y;
            }
        }
        return sum;
    }
};