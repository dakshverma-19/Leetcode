class Solution {
public:
    int numTeams(vector<int>& rating) {
        int sum = 0;
        int n = rating.size();

        for(int j = 0; j < n; j++) {
            int smallerLeft = 0;
            int greaterLeft = 0;
            int smallerRight = 0;
            int greaterRight = 0;

            for(int i = 0; i < j; i++) {
                if(rating[i] < rating[j]) {
                    smallerLeft++;
                }
                if(rating[i] > rating[j]) {
                    greaterLeft++;
                }
            }

            for(int k = j + 1; k < n; k++) {
                if(rating[k] < rating[j]) {
                    smallerRight++;
                }
                if(rating[k] > rating[j]) {
                    greaterRight++;
                }
            }

            sum =  sum +  smallerLeft * greaterRight;
            sum = sum +  greaterLeft * smallerRight;
        }

        return sum;
    }
};


