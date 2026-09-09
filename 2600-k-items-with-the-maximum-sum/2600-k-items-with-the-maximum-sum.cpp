class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector<int>ans;
        int sum=0;
        for(int i=0 ;i<numOnes ; i++){
            ans.push_back(1);
        }
        for(int y=0 ;y<numZeros ; y++){
            ans.push_back(0);
        }
        for(int p=0 ;p<numNegOnes ; p++){
            ans.push_back(-1);
        }
        
        for(int r=0 ;r<k ; r++){
            sum=sum+ans[r];
        }
        return sum;

    }
};