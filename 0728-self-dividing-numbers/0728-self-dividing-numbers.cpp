class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i = left; i <= right; i++) {

            int x = i;
            bool dak = true;

            while(x > 0) {
                int k = x % 10;

           
                if(k == 0) {
                    dak = false;
                    break;
                }

         
                if(i % k != 0) {
                    dak = false;
                    break;
                }

                x = x / 10;
            }

            if(dak == true) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};