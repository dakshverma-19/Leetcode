class Solution {
public:
    int commonFactors(int a, int b) {
        int answer=0;
        int large=max(a,b);
        for(int i=1 ; i<=large ; i++){
            if(a%i==0 && b%i==0){
                answer=answer+1;
            }
        }
        return answer;
    }
};