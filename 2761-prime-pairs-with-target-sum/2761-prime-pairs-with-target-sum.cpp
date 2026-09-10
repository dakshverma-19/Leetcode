class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> answer;
        vector<bool> prime(n + 1, true);

        prime[0] = false;
        prime[1] = false;

       
        for (int i = 2; i * i <= n; i++) {
            if (prime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    prime[j] = false;
                }
            }
        }

     
        for (int x = 2; x <= n / 2; x++) {
            int y = n - x;

            if (prime[x] && prime[y]) {
                answer.push_back({x, y});
            }
        }

        return answer;
    }
};