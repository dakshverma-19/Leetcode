class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>ans;
        int digits=0;
        long long j;
        long long sum=0;
        int k;
        while(n>0){
        k=n%10;
        ans.push_back(k);
        sum=sum+k;
        n=n/10;
        }
        for(int i=ans.size()-1 ; i>=0 ; i-- ){
            if(ans[i]>0){
            digits=(digits*10)+ans[i];
            }
        }
        j=digits*sum;
        return j;
    }
};