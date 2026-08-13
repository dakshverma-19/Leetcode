class Solution {
public:
    int countEven(int num) {
        vector<int>answer;
        int ans=0;
      
        for(int i=1; i<=num; i++){
            answer.push_back(i);
        }
        for(int j =0 ; j<answer.size();j++){
            int sum=0;
           while(answer[j]>0){
            int k = answer[j]%10;
            sum=sum+k;
            answer[j]=answer[j]/10;

           }
           if(sum%2==0){
            ans=ans+1;
           }
        }
       return ans;
    
    }
};