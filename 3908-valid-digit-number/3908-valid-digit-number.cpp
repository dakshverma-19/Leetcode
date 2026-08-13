class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int>ans;
        vector<int>answer;
        while(n>0){
            int k=n%10;
            ans.push_back(k);
            n=n/10;
        }
        for(int i=ans.size()-1 ;i>=0 ; i--){
            answer.push_back(ans[i]);
        }
        for(int m=0 ; m<answer.size() ; m++){  
        
        if(answer[0]==x ){
            return false;
        }else if(answer[m]==x){
            return true;
        }
        }
        return false;
    }
};
