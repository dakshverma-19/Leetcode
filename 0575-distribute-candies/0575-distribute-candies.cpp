class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(),candyType.end());
      int n=candyType.size()/2;
      int sum=1;
      if(candyType.size()==2){
        return 1;
      }
      for(int i=1 ; i<candyType.size() ; i++){
        if(candyType[i]!=candyType[i-1]){
            sum=sum+1;
            if(sum>=n){
                break;
            }
        }
      }  
      return sum;
    }
};