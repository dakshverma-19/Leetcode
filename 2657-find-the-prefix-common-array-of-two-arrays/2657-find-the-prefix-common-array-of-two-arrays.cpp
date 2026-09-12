class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        for(int i=0 ; i<A.size() ; i++){
            int sum=0;
            for(int y=0 ; y<=i ; y++){
                for(int x = 0; x <= i; x++) {
                if(A[x]==B[y]){
                    sum=sum+1;
                }
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};