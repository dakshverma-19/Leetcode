class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int y=money;
        //int p=prices[0]+prices[1];
        int k;
        
        //if(prices[0]==y){
          //  return y;
       // }
        sort(prices.begin(),prices.end());
        int p=prices[0]+prices[1];
        if(prices[0]+prices[1]>money){
            return y;
        }
        if(prices[0]+prices[1]<=money){
             k=(y-p);
        }
        return k;
        
    }
};