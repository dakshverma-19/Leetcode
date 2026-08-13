class Solution {
public:
    int maxProduct(int n) {
        vector<int>answer;
        int sum=1;
        while(n>0){
            int k=n%10;
          answer.push_back(k);
           n=n/10;

        }
       sort(answer.begin(),answer.end());
       int p = answer[answer.size()-1];
       int y = answer[answer.size()-2];

       int ans=(p*y);
       return ans;

    }
};