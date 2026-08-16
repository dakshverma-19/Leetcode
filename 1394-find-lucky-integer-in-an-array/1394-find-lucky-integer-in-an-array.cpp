class Solution {
public:
    int findLucky(vector<int>& arr) {
        int k = -1;

        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size(); i++) {
            int count = 0;

            for(int j = 0; j < arr.size(); j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }

            if(arr[i] == count) {
                k = max(k, arr[i]);
            }
        }

        return k;
    }
};