class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        int answer=0;
        vector<int>ans;
        while(n>0){
            int k=n%10;
           ans.push_back(k);
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0 ;i<ans.size() ; i++){
         if(i%2==0){
            answer=answer+ans[i];
         }else{
         answer=answer-ans[i];
         }
        }
      return answer;
    }
};