class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int p = INT_MAX;
        int u;
        for (int i = 0; i < capacity.size(); i++) {
            if (capacity[i] == itemSize) {
                return i;
            }
        }
        for (int j = 0; j < capacity.size(); j++) {
            if (capacity[j] > itemSize) {
                p = min(capacity[j], p);
            }
        }
        if (p == INT_MAX) {
            return -1;
        } else {
            for (u = 0; u < capacity.size(); u++) {
                if (capacity[u] == p) {
                    break;
                }
            }
        }

        return u;
    }
};