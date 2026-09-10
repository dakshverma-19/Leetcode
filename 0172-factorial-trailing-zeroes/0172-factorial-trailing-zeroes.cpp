class Solution {
public:
    int trailingZeroes(int n) {
        int answer = 0;

        while (n > 0) {
            n = n / 5;
            answer = answer + n;
        }

        return answer;
    }
};